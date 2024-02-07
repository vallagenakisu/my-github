#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
#define ll long long 
ll n , k;
const int ll N = 1e7+9;
long double a[N];

bool cut( long double  x)
{
    long double sum = 0 ;
    f(i,n)
    {
        sum = sum + (long double)a[i]/x;
    }
    return sum >= k ;

}
void sol()
{
    cin >> n >> k;
    f(i,n) cin >> a[i];
    long double l = 1 ,  r = N ; 
    long double  ans = -1;
    while( r - l  >= 0.00001)
    {
        ll mid = l + (r -l)/2;
        if(cut(mid))
        {
            ans = mid;
            l = mid ;
        }
        else 
        r = mid;
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
