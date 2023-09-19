#include<bits/stdc++.h>
using namespace std;
int bins(int a[],int n,int s,int e,int k)
{
    int m=s+(e-s)/2;
    if(e-s<=1){
        if(a[s]>=k)
        return s;
        else if(a[e]>=k)
        return e;
        else 
        return n;
    }
    else if(a[m]<k)
    return bins(a,n,m,e,k);
    else 
    return bins(a,n,s,m,k);
    
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b[k];
    for(int i=0;i<k;i++)
    cin>>b[i];
    for(int i=0;i<k;i++)
    {
        cout<<bins(a,n,0,n-1,b[i])<<endl;
    }
}