#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 1e6 + 9;
bool vis[N];
int parent[N];
vector<int> adj[N];
int v, e;
void bfs(int s)
{
    vis[s] = true;
    parent[s] = -1;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        //cout << u << " ";
        for (auto x : adj[u])
        {
            if (vis[x] and !(parent[u] == x))
            {
                cout << "Cycle Exists" << endl;
                return;
            }
            else if (!vis[x])
            {
                vis[x] = true;
                parent[x] = u;
                q.push(x);
            }
        }
    }
}

void sol()
{
    cin >> v >> e;
    f(i, e)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
