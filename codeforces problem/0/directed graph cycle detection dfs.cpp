#include <bits/stdc++.h>
#define f(i, n) for (int i = 1; i < n; i++)
using namespace std;
const int N = 1e6 + 9;
vector<int> adj[N];
int vis[N];
int path[N];
int parent[N];
int v, e;
int cycle_start,cycle_end;
bool dfs(int s)
{
    //cout << s <<" ";
    path[s] = 1;
    vis[s] = 1;
    for (auto x : adj[s])
    {
        if (!vis[x])
        {
            parent[x] = s;
            if (dfs(x))
                return true;
        }
        else 
        {
            if(path[x])
            {
                cycle_start = x;
                cycle_end = s;
                return true;
            }
            
        }
        
    }
    path[s] = 0;
    return false;
}
void cycle()
{
    for(int i = cycle_end;i!=cycle_start;i = parent[i])
    cout << i << " ";
    cout << cycle_start;
}
void sol()
{
    cin >> v >> e;
    f(i, e+1)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for(int i = 1; i<= v ; i ++ )
    {
        if (!vis[i])
        {
            if (dfs(i))
            {
                cout << "Cycle Exists" << endl;
                cycle();
                return;
            }
        }
    }
    cout <<"Cycle Does Not Exists"<<endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();    
}
