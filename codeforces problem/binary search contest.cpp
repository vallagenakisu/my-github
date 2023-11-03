#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int n , h;
const int N = 1e6;
int a[N];
bool valid(int k)
{
    int left_banana=0;
    int hours=0;
    for(int i =0 ;i < n ;i++)
    {
        if( k>=a[i] )
        hours++;
        else 
        {
            left_banana = a[i] - k;
            hours ++ ;
        }
    }
    //cout << left_banana << endl;
    hours = hours + ceil(1.0*left_banana/k);
    //cout << hours << endl;
    return (hours <= h ); 
}
void sol()
{
    cin >> n >> h;   
    f(i,n) cin >> a[i];
    int l = 1 , r = 2e9,ans=0;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(valid(mid))
        {
            ans = mid;
            r = mid -1 ;
        }
        else 
        l = mid + 1;
    }
    cout << ans << endl;
    //cout << valid(0);
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
