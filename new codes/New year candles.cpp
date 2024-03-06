#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int a , b , m = 0 , d;
    cin >> a >> b;
    int ans = a;
    while (a >= b )
    {
        d = a / b;
        ans = ans + d ;
        m = a % b ;
        a = m + d;
    }
    cout << ans << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
