#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int a , b , n;
    cin >> a >> b >> n;
    int x[n];
    f(i,n) cin >> x[i];
    int c =b  ;
    int count = 0;
    sort( x,x+n );
    //int i = -1 ;
    // while(c)
    // {
        
    //     if( c == 1)
    //     {
    //         i++;
    //         if( i < n )
    //         c = min( c+x[i] , a);
            
    //     }
    //     c--;
    //     count++;
    // }
    for(int i = 0 ; i < n ; i++)
    {
        c = c + min(x[i] , a-1 );
           
    }
    //count = count;
    cout << c << endl;

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
