#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<=r;j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void quicksort(int a[],int n,int l,int r)
{
    if(l<r)
    {
        int pi=partition(a,l,r);
        quicksort(a,n,l,pi-1);
        quicksort(a,n,pi+1,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quicksort(a,n,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    
}