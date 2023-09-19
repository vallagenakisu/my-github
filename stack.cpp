#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *link;
};
node *head=NULL;
void push(int d)
{
    node *newnode= new node;
    newnode->data=d;
    if(head==NULL)
    {
        head=newnode;
        newnode->link=NULL;
    }
    else 
    {
        newnode->link=head;
        head=newnode;
    }
}
void pop()
{
    node *temp=head;
    head=(head)->link;
    free(temp);
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {   cout<<temp->data<<" "; 
        temp=temp->link;
    }
    
}
int peek()
{
    return head->data;
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    pop();
    cout<<peek()<<endl;
    display();


}