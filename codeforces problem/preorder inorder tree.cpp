#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node *insert( node *root,int d)
{
    if(root==NULL )
    return new node(d);
    if( root->data < d)
    root->right=insert(root->right,d);
    else 
    root->left=insert( root->left,d);
    return root;
}
node *succession(node *root)
{
    node *curr=root;
    while(curr && curr->left!=NULL)
    curr=curr->left;
    return curr;
}
node *deletenode(node *root,int key)
{
    if(key > root->data)
    root->right=deletenode(root->right,key);
    else if(key < root->data)
    root->left=deletenode(root->left,key);
    else 
    {
        if(root->left==NULL)
        {
            node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            node *temp=root->left;
            free(root);
            return temp;
        }
        node *temp=succession(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;
}
void inorder(node *root)
{
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int n;
    cin>>n;
    node *root=NULL;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        root=insert(root,d);
    }
    deletenode(root,5);
    inorder(root);
}