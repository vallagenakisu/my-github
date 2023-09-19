#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    const int N=1e5+2;
    int  b[N];
    for(int i=0;i<N;i++)
    b[i]=-1;
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]!=-1)
        minidx=min(minidx,b[a[i]]);
        else
        b[a[i]]=i;
    }
    cout<<minidx+1;
}