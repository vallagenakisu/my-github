#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
#define ll long long
int w,h,n;
bool found(ll s)
{
    ll x = (s/w); 
    ll y = (s/h);
    if(y == 0 ) return false;
    
    return   x>= (double) n/y ;
}
void sol()
{
    cin >> w >> h >> n;
    ll s = 1 , e = 1e14;
    ll ans ;
    while(s<=e)
    {
        ll mid = (s+e)/2;
        if(found(mid))
        {
            ans = mid ;
            e = mid - 1 ;
        }
        else 
        s = mid + 1;
    }
    cout << ans;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sol();
}
