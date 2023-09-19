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
node* merge(node **head1,node **head2)
{
    node *result=NULL;
    node *temp1=*head1,*temp2=*head2;
    while(temp1->link!=NULL && temp2->link!=NULL)
    {
        if(temp1->data >= temp2->data)
        {
            create(&result,temp2->data);
            temp2=temp2->link;
        }
        else 
        {
            create(&result,temp1->data);
            temp1=temp1->link;
        }
    }
    if(temp1!=NULL)
    {
        create(&result,temp1->data);
        temp1=temp1->link;
    }
    if(temp2!=NULL)
    {
        create(&result,temp2->data);
        temp2=temp2->link;
    }
    return result;
}
int main()
{
    node *head1=NULL;
    node *head2=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        create(&head1,d);
    }
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        create(&head2,d);
    }
    display(&head1);
    cout<<endl;
    display(&head2);
    cout<<endl;
    node *result=merge(&head1,&head2);
    display(&result);
}