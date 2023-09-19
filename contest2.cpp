#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 1e5;
vector <int > adj[N];
int visited[N];
queue<int> q;
int level[N];
bool flag=true;
int case1=0;
void bfs(int source)
{
    visited[source] = 1;
    q.push(source);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        //cout <<u<<endl;
        for( auto x : adj[u])
        {
            
            if( visited[x] == 0)
            {
                visited[x]=1;
                q.push(x);
                level[x] = level[u] + 1;
            }
        }
    }
}
void sol()
{
    int  t;
    cin >> t;
    if(t==0) flag = false;
    while ( t-- )
    {
        int x ,y ;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    while(true)
    {
        case1++;
        int so;
        int ttl;
        cin >> so >> ttl;
        if(so ==0 and ttl ==0)
        {
            break;
            case1--;
        }
        
        else 
        bfs(so);
        int reached = 0,not_reached=0,total_node=0;
        for(int i=0;i<N;i++)
        {
            if(visited!=0)
            {
                total_node++;
                if(level[i] <=ttl )
                reached++;
            }
        }
        cout<<"Case "<<case1<<": "<< abs(reached-total_node)<<" nodes not reachable from node "<<so<<" with TTL = "<< ttl<<endl;

    }
    
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  while(flag)
  {
    sol();
  }
}
