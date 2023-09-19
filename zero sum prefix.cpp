#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s1=0,co=0;
    for(int i=0;i<n;i++)
    {
        s1=s1+a[i];
        if(a[i]==0)
        co++;
    }
    if(co>n/2)
    {
        cout<<co<<endl;
    }
    else
    {
    int ind=find(a,a+n,0)-a;
    a[ind]=s1*-1;
    int c=0,s=0;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
        if(s==0)
        c++;
    }
    cout<<c<<endl;
    }
    }
}