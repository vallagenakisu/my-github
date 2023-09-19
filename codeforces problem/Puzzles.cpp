#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m];
    for(int i=0;i<m;i++)cin>>ar[i];
    int a[n];
    int c=1,s=INT_MIN;
    sort(ar,ar+m);
    for(int i=0;i<m-1;i++)
    {
        if(ar[i]==ar[i+1])
        c++;
        else 
        c=1;
        s=max(s,c);
    }
    if(s>=n)
    cout<<0;
    else 
    {
        int z=0;
        int f=INT_MAX;
        while(z<=m-n)
        {int x=0;
        for(int i=z;i<n+z;i++)
        {

            a[x]=ar[i];
            x++;
        }
        x=0;
        int l=a[n-1]-a[0];
        f=min(f,l);
        z++;
        }
        cout<<f;
    } 
}