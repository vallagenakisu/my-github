#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *ptr;
};
node*a=NULL,*b=NULL;
node *newnode;
void createnode(int d,node* &head)
{
    node *temp;
    newnode=new node;
    newnode->data=d;
    newnode->ptr=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else 
    {
        temp->ptr=newnode;
        temp=newnode;
    }    
}
void display(node* &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->ptr;
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        int f;
        cin>>f;
        createnode(f,a);
    }
    display(a);
}
