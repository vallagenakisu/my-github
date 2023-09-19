#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
    int x=mid-l+1;
    int y=r-mid;
    int b[x],c[y];
    for(int i=0;i<x;i++) b[i]=a[l+i];
    for(int i=0;i<y;i++) c[i]=a[mid+1+i];
    int i=0,j=0,k=l;
    while(i<x && j<y)
    {
        if(b[i]<c[j])
        {
            a[k]=b[i];
            k++;i++;
        }
        else 
        {
            a[k]=c[j];
            k++;j++;
        }
    }
    while( i<x )
    {
        a[k]=b[i];
        i++;k++;
    }
    while(j<y)
    {
        a[k]=c[j];
        k++;j++;
    }
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid= (l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}