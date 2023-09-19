#include<bits/stdc++.h>
using namespace std;
#define N 5 
int q[N];
int front =-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==N-1)
    cout<<"OVERFLOW"<<endl;
    else if(front ==-1 && rear==-1)
    {
        front++;rear++;
        q[rear]=x;
    }
    else 
    {
        rear++;
        q[rear]=x;
    }
}
void dequeue()
{
    if(front ==-1 and rear==-1)
    cout<<"UNDERFLOW"<<endl;
    else if(front==rear)
    {
        front=-1;rear=-1;
    }
    else 
    front++; 
}
void display()
{
    if(front==-1 and rear==-1)
    cout<<"IS EMPTY"<<endl;
    else 
    {
        for(int i=front;i<=rear;i++)
        cout<<q[i]<<" ";
    }
}
void peek()
{
    if(front ==-1 and rear==-1)
    cout<<"IS EMPTY"<<endl;
    else 
    cout<<q[front]<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        enqueue(d);
    }
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    display();

}