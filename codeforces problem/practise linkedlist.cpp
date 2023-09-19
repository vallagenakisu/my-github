#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *link;
};
node *temp;
void creation ( node **head,int d)
{
    node *newnode = new node ;
    newnode->data=d;
    newnode->link=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        temp=newnode;
    }
    else
    {
        temp->link=newnode;
        temp=newnode;
    }
}
void display(node **head)
{
    temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
void first_insertion(node **head,int d)
{
    temp=*head;
    node *newnode=new node;
    newnode->data=d;
    newnode->link=temp;
    *head=newnode;
}
void last_insertion(node **head,int d)
{
    temp=*head;
    node *newnode=new node;
    newnode->data=d;
    newnode->link=NULL;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    
    temp->link=newnode;
}
void before_insertion(node **head,int d,int k)
{
    temp=*head;
    node *temp2;
    node *newnode = new node;
    while(temp->data!=k)
    {
        temp2=temp;
        temp=temp->link;
    }
    newnode->data=d;
    newnode->link=temp;
    temp2->link=newnode;
}
void after_insertion(node **head, int d,int k)
{
    temp=*head;
    node *newnode =new node;
    newnode->data=d;
    while(temp->data!=k)
    {
        temp=temp->link;
    }
    newnode->link=temp->link;
    temp->link=newnode;
}
// head -> 1 ->2 ->3
void deletion(node **head,int k)
{
    temp=*head;
    node *temp2;
    while(temp->data!=k)
    {
        temp2=temp;
        temp=temp->link;
    }
    temp2->link=temp->link;
    free(temp);
}
int main()
{
    node *head=NULL;
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        creation(&head,d);
    }
    first_insertion(&head,69);
    last_insertion(&head,76);
    before_insertion(&head,44,3);
    after_insertion(&head,22,1);
    deletion(&head,6);
    display(&head);
}