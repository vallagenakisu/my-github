#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
bool visited[N];
vector<int> adj[N];
queue<int> q;
void bfs(int source)
{
    visited[source]=1;
    q.push(source);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<< u << endl;
        for(auto x : adj[u])
        {
            if(visited[x]==0)
            {
                visited[x]=1;
                q.push(x);
            }
        }
    }
}
int main()
{
    int v,e;
    cin >> v >> e ;
    for(int i=0;i < e; i++)
    {
        int x,y ;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // for(int i=0;i < e;i++)
    // {
    //     for(auto x : adj[i])
    //     cout<< x << " ";
    //     cout<<endl;
    // }
    bfs(3);
}