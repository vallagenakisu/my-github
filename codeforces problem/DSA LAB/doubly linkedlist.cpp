#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *prev;
    node *next;
};
void create(node **head,int d)
{
    node *newnode=new node;
    node  *temp;
    newnode->data=d;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(*head==NULL)
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
void first_insertion(node **head,int d)
{
    node *newnode= new node;
    newnode->data=d;
    newnode->prev=NULL;
    (*head)->prev=newnode;
    newnode->next=*head;
    *head=newnode;
}
void last_insertion(node **head,int d)
{
    node *newnode=new node;
    newnode->data=d;
    newnode->next=NULL;
    node *temp=*head;
    while(temp->next!=NULL)
    temp=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
}
void after_insertion(node **head,int d,int s)
{
    node *newnode=new node;
    newnode->data=d;
    node *temp=*head;
    while(temp->data!=s)
    temp=temp->next;
    (temp->next)->prev=newnode;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
}
void before_insertion(node **head,int d,int s)
{
    node *newnode=new node;
    newnode->data=d;
    newnode->prev=NULL;
    node *temp=*head;
    while(temp->data!=s)
    temp=temp->next;
    if(temp->prev==NULL)
    {
        newnode->next=temp;
        temp->prev=newnode;
        *head=newnode;
    }
    else 
    {
        (temp->prev)->next=newnode;
        newnode->prev=(temp->prev);
        temp->prev=newnode;
        newnode->next=temp;
    }
}
void del_begin(node **head)
{
    node *temp=*head;
    (temp->next)->prev=NULL;
    *head=temp->next;
    temp->next=NULL;
    free(temp);
}
void del_last(node **head)
{
    node *temp=*head;
    while(temp->next!=NULL)
    temp=temp->next;
    (temp->prev)->next=NULL;
    temp->prev=NULL;
    free(temp);
}
void del(node **head,int s)
{
    node *temp=*head;
    while(temp->data!=s)
    temp=temp->next;
    if(temp->prev==NULL)
    {
        *head=temp->next;
        (temp->next)->prev=NULL;
        temp->next=NULL;
        free(temp);
    }
    else 
    {
        (temp->next)->prev=temp->prev;
        (temp->prev)->next=temp->next;
        temp->next=NULL;
        temp->prev=NULL;
        free(temp);
    }
}
void reverse_till(node **head,int s)
{
    node *temp=*head;
    node *tail;
    while(temp->data!=s)
    temp=temp->next;
    tail=temp->prev;
    tail->next=NULL;
    temp->prev=NULL;
    node *current,*nextnode;
    current=*head;
    while(current!=NULL)
    {
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    current=*head;
    *head=tail;
    tail=current;
    tail->next=temp;
    temp->prev=tail;
}
int main()
{
    node *head=NULL;
    for(int i=0;i<5;i++)
    {
        int f;
        cin>>f;
        create(&head,f);
    }
    first_insertion(&head,69);
    last_insertion(&head,5);
    after_insertion(&head,420,3);
    before_insertion(&head,123,4);
    reverse_till(&head,420);
    display(&head);
}

