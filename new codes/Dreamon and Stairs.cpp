#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n , m ;
    cin >> n >> m;
    if( n < m )
    {
        cout << -1;
        return;
    }
    int lowe_bound = ceil(n/2.0);
    int ans = ceil(lowe_bound / (m*1.0)) * m ;
    cout << ans << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
