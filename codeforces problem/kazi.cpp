#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *link;
};
node *temp;
void create( node ** head, int d)
{   
    //temp=*head;
    node*newnode=new node;
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
void first_insertion(node **head,int a)
{
    node *newnode=new node;
    newnode->data=a;
    newnode->link=*head;
   *head=newnode;

}
void after_insertion( node**head,int a,int t)
{
    temp=*head;
    node* newnode=new node;
    newnode->data=a;
    while(temp->data!=t)
    {
        temp=temp->link;
    }
    newnode->link=temp->link;
    temp->link=newnode;
}
void before_insertion(node **head,int d,int t)
{
    node *newnode= new node;
    temp=*head;
    node*temp2=NULL;
    newnode->data=d;

    while(temp->data!=t)
    {
        temp2=temp;
        temp=temp->link;
    }
    newnode->link=temp;
    temp2->link=newnode;
}
void deletion(node **head,int t)
{
    temp=*head;
    node* temp2;
    while(temp->data!=t)
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
    for(int i=0;i<4;i++)
    {
        int f;
        cin>>f;
    create(&head,f);
    }
    
    first_insertion(&head,69);
    after_insertion(&head,69,3);
    before_insertion(&head,420,3);
    deletion(&head,420);
    display(&head);
}