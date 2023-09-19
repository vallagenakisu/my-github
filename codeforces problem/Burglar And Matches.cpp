#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> vp;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        vp.push_back(make_pair(x,y));
    }
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(vp[i].second<vp[j].second)
            swap(vp[i],vp[j]);
        }
    }
    int s=0;
    int i=0;
    for(int i=0;i<m;i++)
    {
        int q=min(n,vp[i].first);
        n=n-q;
        s=s+q*vp[i].second;
    }
    cout<<s;
}