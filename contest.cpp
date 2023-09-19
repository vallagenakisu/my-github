#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
  int n , l;
  cin >> n >> l;
  int a[n];
  f(i,n) cin >> a[i];
  sort(a,a+n);
  double dif=(a[0]-0 ) ;
  if( dif < l - a[n-1] )
  dif = (l - a[n-1] ) ;

  for(int i=0; i<n-1;i++)
  {
    if( dif < (a[i+1] - a[i])/2.0 )
    {
      dif = (a[i+1] - a[i])/2.0; 
    }
  }

  cout<<fixed<<setprecision(12)<< dif;
  
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
