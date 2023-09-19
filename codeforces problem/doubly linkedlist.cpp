#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *prev;
    node *next;
};
void creation(node **head,int d)
{
    node *newnode= new node;
    newnode->prev=NULL;
    newnode->data=d;
    newnode->next=NULL;
    node *temp;
    if(*head ==NULL)
    {
        *head=newnode;
        temp=newnode;
    }
    else 
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
void display(node **head)
{
    node *temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void delete1(node **head,int d)
{
    node *temp=*head;
    while(temp->data!=d)
    temp=temp->next;
    if(temp->prev==NULL)
    {
        *head=temp->next;
        free(temp);
    }
    else
     {
    (temp->prev)->next=temp->next;
    (temp->next)->prev=temp->prev;
    free(temp);
    }
}
void reverse(node **head)
{
    node *current=*head;
    node *temp=NULL;
    while(current!=NULL)
    {
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=NULL)
    *head=temp->prev;
}
int main()
{
    node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int f;
        cin>>f;
        creation(&head,f);
    }
    //reverse(&head);
    delete1(&head, 2);
    display(&head);
}
