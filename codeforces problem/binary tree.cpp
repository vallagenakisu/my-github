#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

void preorder(node *root)
{
    if(root==0)
    return;
    cout<<(root)->data<<" ";
    preorder( (root)->left);
    preorder((root)->right);
}
void inorder(node *root)
{
    if(root==0) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(node *root)
{
    if(root ==0) return ;
    postorder( root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    node *root=new node(5);
    root->left=new node(7);
    root->right= new node(8);
    root->left->left=new node(6);
    root->left->right=new node(10);
    root->right->left=new node(4);
    root->right->right= new node(1);
    //root=create();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}
