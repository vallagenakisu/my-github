#include<bits/stdc++.h>
#include "linkedlist.h"
using namespace std;
class node 
{
    public:
    int data;
    node *link;
};
int main()
{
    node *head=NULL;
    for(int i=0;i<5;i++)
    {
        int f;
        cin>>f;
        create(&head,f);
    }
    display(&head);
}
