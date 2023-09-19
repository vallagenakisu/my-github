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
void add(node **head)
{
    temp=*head;
    int n=0;
    while(temp!=NULL)
    {
        n=n+temp->data;
        n=n*10;
        temp=temp->link;
    }
    n=n/10;
    n=n+1;
    node *newhead=NULL;
    creation(&newhead,n%10);
    n=n/10;
    while(n)
    {
        first_insertion(&newhead,n%10);
        n=n/10;
    }
    *head=newhead;
}
void delete1(node **head,int pos)
{
    temp=*head;
    int c=0;
    node *temp2=temp;
    while(c<pos)
    {
        temp2=temp;
        temp=temp->link;
        c++;
    }
    temp2->link=temp->link;
    free(temp);
}
node* merge(node **head1,node **head2)
{
    node *temp1=*head1;
    node *temp2=*head2;
    node *result=NULL;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data > temp2->data)
        {
            creation(&result,temp2->data);
            temp2=temp2->link;
        }
        if(temp1->data < temp2->data)
        {
            creation(&result,temp1->data);
            temp1=temp1->link;
        }
    }
    while(temp1!=NULL)
    {
        creation(&result,temp1->data);
        temp1=temp1->link;
    }
    while(temp2!=NULL)
    {
        creation(&result,temp2->data);
        temp2=temp2->link;
    }
    return result;
}
int main()
{
    node *head=NULL;
    node *head2=NULL;
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        creation(&head,d);
    }
    for(int i=0;i<5;i++)
    {
        int d;
        cin>>d;
        creation(&head2,d);
    }
    display(&head);
    cout<<endl;
    display(&head2);
    cout<<endl;
    node *result =merge(&head,&head2);
    display(&result);
}