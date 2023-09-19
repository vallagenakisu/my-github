#include <bits/stdc++.h>
using namespace std;
int const N = 1e5;
vector<pair<int, int>> adj[N];
int cost = 0;
bool vis[N] = {0};
int parent[N];

int Prims(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();
        int u = p.second;
        int ct = p.first;
        // implement your logic here.
        if (!vis[u])
        {
            vis[u] = 1;
            int count = 0;
            cost = cost + ct;
            cout<<parent[u] <<" "<< u <<endl;
            for (auto it : adj[u])
            {  
                if (!vis[it.second])
                {
                    pq.push(it);
                    parent[it.second] = u;
                    count++;
                    if(u==src) cost = cost + it.first;
                    if (count >= 2)
                        break;
                }
            }
        }
    }

    return cost;
}
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }
    Prims(1);
    cout << cost;
}
