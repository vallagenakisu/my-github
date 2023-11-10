#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
#define pii pair<int, int>
const int N = 25;
const int INF = 1e9 + 7;
vector<int> dist(N, INF);
vector<pii> adj[N];
vector<int> parent(N);
int v, e;
void dijkstra(int source)
{
    dist[source] = 0;
    parent[source] = -1;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({dist[source], source});
    while (!pq.empty())
    {
        pii u = pq.top();
        pq.pop();
        for (auto x : adj[u.second])
        {
            if (x.first + dist[u.second] < dist[x.second])
            {
                dist[x.second] = x.first + dist[u.second];
                parent[x.second] = u.second;

            }
            pq.push({dist[x.second], x.second});
        }
    }
}
void path(int x)
{
    int i = parent[x];
    while(i!= -1)
    {
        cout << i << " ";
        i = parent[i];
    }
}

void sol()
{
    cin >> v >> e;
    f(i, e + 1)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({w, b});
    }
    dijkstra(0);
    path(5);
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
