#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *ptr;
};
void creation( node **head, int d)
{
    node *temp;
    node *newnode=new node;
    newnode->data=d;
    newnode->ptr=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        temp=newnode;
    }
    else 
    {
        temp->ptr=newnode;
        temp=temp->ptr;
    }
}
void last_insert(node **head,int d)
{
    node *newnode= new node;
    newnode->data=d;
    newnode->ptr=NULL;
    node *temp=*head;
    while(temp->ptr!=NULL)
    temp=temp->ptr;
    temp->ptr=newnode;

}
void first_insertion(node **head, int d)
{
    node *newnode= new node;
    newnode->data=d;
    newnode->ptr=*head;
    *head=newnode;
}
void print(node **head)
{
    node *temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->ptr;
    }
}
void sortlinked(node **head)
{
    node *i,*j;
    int sw;
    for(i=*head;i->ptr!=NULL;i=i->ptr)
    {
        for(j=i->ptr;j!=NULL;j=j->ptr)
        {
            if(i->data > j->data)
            {
                sw=i->data;
                i->data=j->data;
                i->data=sw;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    node *head=NULL;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        creation(&head,d);
    }
    // last_insert(&head,10);
    first_insertion(&head,69);
    sortlinked(&head);
    print(&head);
}