#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,q;
    cin>>n>>q;
    long long  int a[n];
    long long  int b[q];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<q;i++)
    cin>>b[i];
    long long int c[q];
    for(int i=0;i<q;i++)
    c[i]=0;
    for(int i=0;i<q;i++)
    {
        long long int s=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]>=a[j])
            {
                s=s+a[j];
                c[i]=s;
            }
            else
            break;     
        }
 
    }
    for(int i=0;i<q;i++)
    cout<<c[i]<<" ";
    cout<<endl;
}
}