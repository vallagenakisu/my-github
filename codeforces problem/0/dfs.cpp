#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i =0 ; i < n ; i++)
const int N = 1e6+9;
vector<int> adj[N];
int vis[N];
void dfs(int s)
{
    cout << s << " ";
    vis[s] = 1;
    for(auto x : adj[s])
    {
        if(!vis[x])
        {
            dfs(x);
        }
    }
}
int main()
{

    int e;
    cin >> e;
    f(i,e)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(35);
}

