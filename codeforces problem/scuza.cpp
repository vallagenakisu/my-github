#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n];
        vector<pair<ll,ll>> b;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<q;i++)
        {
            cin>>b[i].first;
            b[i].second=i;
        }
        sort(b.begin(),b.end());
        ll ans[q];
        ll pos=0;
        ll sum=0;
        for(ll i=0;i<q;i++)
        {
            while(pos<n && a[pos]<=b[i].first)
            {
                sum=sum+a[pos];
                pos++;
            }
            ans[b[i].second]=sum;
        }
        for(ll i=0;i<q;i++)
        cout<<ans[i]<<" ";
    }
}