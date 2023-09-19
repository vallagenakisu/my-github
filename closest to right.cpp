#include<bits/stdc++.h>
using namespace std;
int upbound(int a[],int s,int e,int k)
{
    int m=s+(e-s)/2;
    if(e-s<=1)
    {
        if(a[s]>k)
        return s;
        else if(a[e]>k)
        return e;
        else
        return e+1;
        return 0;
    }
    if(a[m]<=k)
    return upbound(a,m+1,e,k);
    else
    return upbound(a,s,m,k);
    return 0;
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
        cout<<upbound(a,0,n-1,b[i])<<endl;
    }
}