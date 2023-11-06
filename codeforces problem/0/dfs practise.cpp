#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 1e6 + 9;
vector<int> adj[N];
int vis[N];
int parent[N];
int v, e;
int cycle_start, cycle_end;
bool dfs(int s)
{
    // cout << s << " ";
    vis[s] = 1;
    for (auto x : adj[s])
    {
        if (parent[s] == x)
        {
            // cout << s <<" "<<  x << endl;
            continue;
        }
        if (!vis[x])
        {
            parent[x] = s;
            if (dfs(x))
                return true;
        }
        else
        {
            if (parent[x] != s)
            {
                // cout << s << " " << x << endl;
                cycle_start = s;
                cycle_end = x;
                return true;
            }
        }
    }
    return false;
}
void cycle()
{
    for (int i = cycle_start; i != cycle_end; i = parent[i])
        cout << i << " ";
    cout << cycle_end;
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
    if (dfs(1))
    {
        cout << "Cycle Exists" << endl;
        cycle();
    }
    else
        cout << "Cycle Does not Exists" << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
