#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int m=-1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    if(m<a[i])m=a[i];
    int count[m+1]={0};
    for(int i=0;i<n;i++)
    count[a[i]]++;
    int pf[m+1]={0};
    int s=0;
    for(int i=1;i<m+1;i++)
    {
        pf[i]=pf[i-1]+count[i];
    }
    int b[n]={0};
    for(int i=n-1;i>=0;i--)
    {
        pf[a[i]]--;
        b[pf[a[i]]] =a[i];
    }
    for(int i=0;i<n;i++) cout<<b[i]<<" ";
    
    
    
}