#include<bits/stdc++.h>
using namespace std;
int as[10000]={0};
int bs[10000]={0};
void insert(int a[],int k, int d,int n)
{
    for(int i=0;i<n;i++)
    as[i]=a[i];
    for(int i=n+1;i>k;i--)
    {
        as[i]=as[i-1];
    }
    as[k]=d;
}
void deletetion(int a[],int k,int n)
{
    int c=0;
    for(int i=0;i<k;i++) {
        as[c]=a[i];
        c++;
    }
    for(int i=k+1;i<n;i++) {
        as[c]=a[i];
        c++;
    }
}
int bins(int a[],int k,int n,int *d)
{
    int s=0,e=n-1;
    int x=e;
    if(k<a[e])
    {
    while(e-s>1)
    {
        {
        int mid=e+s/2;
        if(a[mid]<k)
        s=mid+1;
        else if(a[mid]>k)
        e=mid-1;
        else if(a[mid]==k)
        {
            *d=mid;
            return 1;
        }
        }
        *d=e+1;
        return 0;
    }   
    }
    else 
    {
        *d=x+1;
        return 0;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k,d;
    cin>>k;
    int f=bins(a,k,n,&d);
    //cout<<f;
if(f==1)
    deletetion(a,d,n);
else 
    insert(a,d,k,n); 
    
    //insert(a,2,3,n);
    //deletetion(a,2,n);
    for(int i=0;i<10000;i++)
    {
        if(as[i]==0)
        break;
        else 
        cout<<as[i]<<" ";
    }
    
}