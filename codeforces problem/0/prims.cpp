#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 1e5;
#define pii pair<int,int>
int vis[N];
int parent[N];
vector<pii>adj[N];
int v,e,sum;
void mst(int source)
{
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push({0,source});
    while(!pq.empty())
    {
        auto u = pq.top();
        pq.pop();
        if(vis[u.second]) continue;
        vis[u.second] = 1;
        sum = sum+u.first;
        for(auto x : adj[u.second])
        {
            if(!vis[x.second])
            {
                parent[x.second] = u.second;
                pq.push(x);
            }
        }
    }
}
void printmst()
{
    for(int i = 4 ; i!=0;i=parent[i])
    {
        cout << i << " ";
    }
    cout << 0 << " ";
}
void sol()
{
    cin >> v >> e;
    f(i,e)
    {
        int a,b,c;
        cin >> a >> b >> c;
        adj[a].push_back({c,b});
        adj[b].push_back({c,a});
    }
    mst(0);
    cout << sum << endl;
    printmst();
    
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
