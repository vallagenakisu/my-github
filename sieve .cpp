#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<int> v;
void sieve(int n)
{
    ll int  a[n+3]={0};
    for(ll int i=2;i<n+10;i++)
    {
        if(a[i]==0)
        {
            for(ll int j=2*i;j<n+3;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    for( ll int  i=2;i<n+3;i++)
    {
        if(a[i]==0)
        {
            v.push_back(i);
        }
    }
    for(ll int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}