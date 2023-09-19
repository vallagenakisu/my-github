#include<bits/stdc++.h>
using namespace std;
#define N 7
int front=-1;
int rear=-1;
int que[N];
void enq(int x)
{
    if(front==-1 and rear==-1)
    {
        front=rear=0;
        que[rear]=x;
    }
    else if(((rear+1)%N)==front)
    {
        cout<<"QUEUE IS FULL"<<endl;
    }
    else 
    {
        rear=(rear+1)%N;
        que[rear]=x;
    }
}
void deq()
{
    if(front==-1 and rear==-1)
    cout<<"QUEUE IS EMPTY"<<endl;
    else if(front==rear)
    {
        front==rear==-1;
    }
    else 
    {
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    while(i!=rear)
    {
        cout<<que[i]<<" ";
        i=(i+1)%N;
    }
    cout<<que[rear]<<" ";
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        enq(d);
    }
    display();
}