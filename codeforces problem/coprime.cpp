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
    cin>>a[i];
    const int N=1e3+5;
    int b[N];
    for(int i=0;i<N;i++)
    b[i]=-1;
    for(int i=0;i<n;i++)
    b[a[i]]=i;
    int s=INT_MIN;
        for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(b[i]!=-1 && b[j]!=-1)
            {
                if(__gcd(a[b[i]],a[b[j]])==1)
                {
                    int f=b[i]+b[j]+2;
                    s=max(s,f);
                }
            }
        }
    }
    if(s==INT_MIN)
    cout<<-1<<endl;
    else
    cout<<s<<endl;
}   
}