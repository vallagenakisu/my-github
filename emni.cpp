#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int data;
  node *link;
};

void creation(node **head,int d)
{
  node *newnode=new node;
  newnode->data=d;
  newnode->link=NULL;
  node *temp;
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
  node *temp;
  temp=*head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->link;
  }
}
void first_insertion(node **head,int d)
{
    node *newnode=new node;
    newnode->data=d;
    newnode->link=*head;
    *head=newnode;
}
void reverse(node **head,node **head2)
{
    node *temp=*head;
    while(temp!=NULL)
    {
        first_insertion(&(*head2),temp->data);
        temp=temp->link;
    }
}
void merge(node **head,node **head2)
{
    node *temp=*head;
    while(temp->link!=NULL)
    temp=temp->link;
    temp->link= *head2;
}
void after_insertion(node **head,int d,int s)
{
    node *newnode=new node ;
    newnode->data=d;
    node *temp=*head;
    while(temp->data!=s)
    temp=temp->link;
    newnode->link=temp->link;
    temp->link=newnode;
}
void alternate_merge(node **head,node **head2)
{
    node *temp=*head;
    node *temp2=*head2;
    while(temp->link!=NULL)
    {
        after_insertion(&(*head),temp2->data,temp->data);
        temp=temp->link;
        temp2=temp->link;
    }
}
int main()
{
  node *head=NULL;
  node *head2=NULL;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int f;
    cin>>f;
    creation(&head,f);
  }
  for(int i=0;i<n;i++)
  {
    int f;
    cin>>f;
    creation(&head2,f);
  }

  //first_insertion(&head,69);
  //reverse(&head,&head2);
  //merge(&head,&head2);
  //after_insertion(&head,8,5);
  alternate_merge(&head,&head2);
  display(&head);


}