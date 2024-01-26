#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int l,r;
    cin >> l >> r;
    if(l*2 <=r)
    {
        cout  << l << " " << 2*l << endl;
    }
    else 
    {
        cout << -1 <<" " << -1  << endl;
    }
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
