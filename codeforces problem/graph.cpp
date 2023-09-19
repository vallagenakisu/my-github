#include<bits/stdc++.h>
using namespace std;
bool vis[10000];
vector<int> adj[100];
void bfs (int source)
{
    queue<int> q;
    q.push(source);
    vis[source]=1;
    while(!q.empty() )
    {
        int cur=q.front();
        q.pop();
        cout<<cur<<" ";
        for(auto child : adj[cur] )
        {
            if(!vis[child]){
            q.push(child);
            vis[child]=1;
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //bfs(3);
    


}