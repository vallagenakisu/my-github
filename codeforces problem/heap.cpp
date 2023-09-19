#include<bits/stdc++.h>
using namespace std;
int heap[100];
void insert(int heap[],int n,int d)
{
    n=n+1;
    int i=n;
    heap[n]=d;
   
        while(i>1)
        {
            int parent=i/2;
            if(heap[parent]  < heap[i] )
            {
                swap(heap[parent],heap[i]);
                i=parent;
            }
            else 
            return;
        }
}
void delete1(int heap[],int *n)
{
    heap[1]=heap[*n];
    *n=*n-1;
    int i=1;
    int left=2*i;
    int right=2*i+1;
    int large= left>right? 2*i : 2*i+1;
    while(i<*n)
    {
        if(heap[i] < heap[large])
        {
            swap(heap[i],heap[large]);
            i=large;
        }
        else return;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        insert(heap,i,data);
    }
    for(int i=1;i<n;i++)
    cout<<heap[i]<<" ";
    cout<<endl;
    // cout<<heap[n-1]<<" "<<n-1;
    // cout<<endl;
    delete1(heap,&n-1);
    cout<<n<<endl;
    for(int i=1;i<n;i++)
    cout<<heap[i]<<" ";

}