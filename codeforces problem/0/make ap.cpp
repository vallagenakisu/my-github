#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int a, b, c ;
    cin >> a >> b >> c;
    int na= b-(c-b);
    if(na % a == 0  and na > 0)
    {
        cout << "YES" << endl;
        return;
    }
    int nb = a + (c-a)/2;
    if( nb % b == 0 and nb > 0  and (c-a) % 2 == 0)
    {
        cout <<"YES" << endl;
        return;
    }
    int nc = a+2*(b-a);
    if( nc % c == 0 and nc  > 0 )
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
