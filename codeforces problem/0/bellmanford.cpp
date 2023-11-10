#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
#define pii pair<int, int>
const int N = 1e3;
vector<vector<int>> adj;
vector<int> dist(N, N);
int parent[N];
int v, e, cycle_start, cycle_end;
void bellman(int source)
{
    dist[source] = 0;
    for (int i = 0; i < v; i++)
    {
        for (auto it : adj)
        {
            int u = it[0];
            int s = it[1];
            int w = it[2];
            if (dist[u] != N and dist[u] + w < dist[s])
            {
                dist[s] = dist[u] + w;
                parent[s] = u;
            }
        }
    }
    for (auto it : adj)
    {
        int u = it[0];
        int s = it[1];
        int w = it[2];
        if (dist[u] != N and dist[u] + w < dist[s])
        {
            //cout << s << endl;
            cycle_start = s;
            cycle_end = u;
        }
    }
}
void detectCycle()
{
    //cout << cycle_start << endl;
    if (cycle_end != 0 || cycle_start != 0)
    {
        for (int i = cycle_end; i != cycle_start; i = parent[i])
            cout << i << " ";
            cout << cycle_start ;
    }
    cout << endl;
}
void sol()
{
    cin >> v >> e;
    f(i, e)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj.push_back({a, b, c});
    }
    // for(auto x : adj)
    // {
    //     for(auto y : x)
    //     cout << y <<" ";
    //     cout << endl;
    // }
    // cout << adj.size()<<endl;
    bellman(1);
    detectCycle();
    for (int i = 1; i <= v; i++)
        cout << dist[i] << " ";
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
