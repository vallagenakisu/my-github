#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N=1e5;
vector<pair<int,int> > adj[N];
bool visited[N];
void bfs_color(int source)
{
    queue< pair<int,int> > q;
    q.push({source,0});
    int level=0;
    visited[source]=1;
    while(!q.empty())
    {
        pair <int, int > u = q.front();
        q.pop();
        int count =0;
        for(auto &x : adj[u.first])
        {
            if(visited[x.first] == 0 )
            {
                visited[x.first]=1;
                if( level %2 == 0 )
                x.second=1;
                else 
                x.second=0;
                q.push(x);
                count++;
                //cout<< level+1 << " " << x.first << " color " << x.second<<endl;
            }
        }
        if(count) level++;
        
        //cout << u.first << " color " << u.second<< endl; 
    }

}
bool bfs_traverse(int source,int color)
{
    queue< pair<int , int > > q;
    q.push( { source , color } );
    //visited[source]=1;
    while(! q.empty() )
    {
        pair <int ,int > u = q.front();
        q.pop();
        visited[u.first]=1;
        for( auto &x : adj[u.first] )
        {
            if(visited[x.first]==0)
            {
            visited[x.first]=1;
            q.push(x);
            cout<<"parent "<<u.first<<" color "<<u.second<<" child "<<x.first<<" color "<<x.second<<endl;
            if(u.second ==x.second)
             return 0;
            }
        }
        //cout << u.first <<" color "<< u.second<<endl;
    }
    return 1;
}
void sol()
{
    int n;
    cin >> n;
    int l;
    cin >> l;
    while(l--)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back({b,0});
        adj[b].push_back({a,0});
    }
    bfs_color(1);
    for(int i=0;i<N;i++)
    visited[i]=0;
    bool ans = bfs_traverse(0,1);
    //bool ans = check (1,n);
     if(ans) cout << "BICOLORABLE"<<endl;
     else 
     cout<<"NOT BICOLORABLE"<<endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}
