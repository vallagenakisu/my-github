#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int n , k ;
bool pos(int x)
{
    int f = x/n;
    return (x-f) >= k;
}
void sol()
{
    cin >> n >> k;
    int l = 1 , r = 2e9,ans=0;
    while( l <= r )
    {
        int mid = l + ( r-l )/2;
        if(pos(mid))
        {
            ans = mid ;
            r = mid - 1;
        }
        else 
        {
            l = mid + 1 ;
        }
    }
    //cout << pos (17);
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
