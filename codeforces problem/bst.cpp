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
void inorder(node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
node *insert(node * root, int val)
{
    if(root==NULL)
    return new node(val);
    if(val < root->data)
    root->left=insert(root->left,val);
    else 
    root->right=insert(root->right,val);
    return root;
}
node *inordersucc(node *root)
{
    node* curr=root;
    while(curr && curr->left!=NULL)
    curr=curr->left;
    return curr;
}
node *deletenode(node *root, int key)
{
    if( root->data < key )
    root->right=deletenode(root->right, key);
    else if(root->data < key)
    root->left=deletenode(root->left,key);
    else 
    {
        if(root->left==NULL)
        {
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            node *temp=root->left;
            free(root);
            return temp;
        }
        node* temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;
}
node * search( node *root,int key)
{
    if(root==NULL) return NULL;
    if(key <root->data) return search(root->left,key);
    else if(key > root->data ) return search(root->right,key);
    return root;
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
        //cout<<d<<" ";
        root=insert(root,d);
    }
    deletenode(root,7);
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    // if(search(root,10)) cout<<"EXISTS";
    // else cout<<"DOES NOT EXIST";

}