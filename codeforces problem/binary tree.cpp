#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
node * create()
{
    node *newnode=new node;
    int x;
    cin>>x;
    if(x==-1)
    return 0;
    newnode->data=x;
    newnode->left=create();
    newnode->right=create();
    return newnode;
}
int main()
{
    node *root=0;
    root=create();
}
