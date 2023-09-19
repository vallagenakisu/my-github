#include<bits/stdc++.h>
using namespace std;
int maxsubarray(int *a,int n)
{
    int pf[n];pf[0]=a[0];
    for(int i=1;i<n;i++)
    pf[i]=pf[i-1]+a[i];
    int mx=INT_MIN,mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(pf[i] >mx ) mx=pf[i];
        if(pf[i] <mn)mn=pf[i];
    }
    if(mn>0) return mx;
    else return mx-mn;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<maxsubarray(a,n)<<endl;
}
