#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 1e6+9;
bool vis[N];
int  color[N];
vector<int>adj[N];
int par[N];
int v,e;

bool bfs(int s )
{
    memset(color,-1,sizeof(color)); //-1 mane unvisited
    queue<int> q;
    q.push(s);
    color[s]=0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto x : adj[u])
        {
            if( color[x]==-1 )
            {
                color[x]=1-color[u];
                q.push(x);
            }
            else if(color[u]==color[x]) return false;
        }
    }
    return true;
}


int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  while(1){
    cin>>v;
    if(!v) return 0;
    cin>>e;
    f(i,v) adj[i].clear();
    f(i,e)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //cout<<bfs(0)<<endl;
    cout<<((bfs(0))?"BICOLORABLE.":"NOT BICOLORABLE.")<<endl;
  }
  
}
