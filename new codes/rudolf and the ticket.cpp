#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n , m , k ;
    cin >> n >> m >> k;
    int b[n] , c[m];
    f(i,n) cin >> b[i];
    f(i,m) cin >> c[i];
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <m;j++)
        {
            if(b[i] + c[j]  <= k )
            ans++;
        }
    }
    cout << ans << endl;
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
