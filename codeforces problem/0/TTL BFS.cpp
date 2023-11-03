#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 1e6 + 9;
bool vis[N];
int level[N];
int parent[N];
vector<int> adj[N];
int e, l, till = 1;
int vertices;

void bfs(int s)
{
    memset(vis, 0, N);
    memset(level, 0, N);
    memset(parent, 0, N);
    vis[s] = true;
    queue<int> q;
    q.push(s);
    level[s] = 0;
    parent[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto x : adj[u])
        {
            if (!vis[x])
            {
                vis[x] = true;
                level[x] = level[u] + 1;
                parent[x] = u;
                q.push(x);
                if (level[x] <= l)
                    till++;
            }
        }
        vertices++;
    }
}

void sol()
{
    cin >> e;
    f(i, e)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int start;
    cin >> start >> l;

    bfs(start);
    cout << vertices - till << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
