#include<bits/stdc++.h>
using namespace std ;

using pii = pair<int , int> ;

int n , mx , cnt , cost;
vector<pii> adj[10005];
bool vis[10005];

void prim(int src){
    priority_queue<pii , vector<pii>,greater<pii>> pq ;
    pq.push({0,src}) ;

    int counter = 0 ;
    while(!pq.empty()){
        pii p = pq.top() ;
        pq.pop() ;
        int u = p.second ;
        int w = p.first ;
        if(w >= mx){  counter = 1 ; break ; }
        if(!vis[u]){
            vis[u] = 1 ;
            cost += w ;
            counter++ ;
            for(auto v: adj[u]){
                if(!vis[v.second]) pq.push(v) ;
            }
        }
    }
    if(counter) cnt++ ;
}

int main(){
    int t , tc= 0 ; cin >> t ; 
    while(tc++ < t){
        cout << "Case #"<< tc << ": " ;
        cost = cnt = 0 ;
        int m ;
        cin >> n >> m >> mx;
        for(int i = 1 ; i <= m ; i++){
            int a , b , c ;
            cin >> a >> b >> c ;
            adj[a].push_back({c,b}) ;
            adj[b].push_back({c,a}) ;
        }
        
        for(int i = 1 ; i <= n ; i++) sort(adj[i].begin() , adj[i].end()) ;
        for(int i = 1 ; i <= n ; i++){
            prim(i) ;
        }

        cout << cost+cnt*mx << " " << cnt << endl ;
        for(int i = 1 ; i <= n ; i++) adj[i].clear() ;
        memset(vis,0,sizeof(vis)) ;
    }

}