#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
#define ll long long 
int a , b , n;
bool greedy(ll s)
{
    ll x = s/a;
    ll y = s/b;
    if(y == 0) return false;
    return x >= (double)n/y;
}
void sol()
{
    cin >> a >> b >> n;
    ll l = 1 , r =1e14+7 , ans = -1;
    while( l<=r )
    {
        ll mid = l + ( r - l)/2;
        if( greedy(mid))
        {
            ans = mid;
            r = mid -1 ;
        }
        else 
        {
            l = mid + 1;
        }
    }
    cout << ans ;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
