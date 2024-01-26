#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    // int g , l ;
    // cin >> g >> l;
    // if(l % g == 0 )
    // {
    //     cout << g << " " << l << endl;
    // }
    // else 
    // cout << -1 << endl;
    long long int a,b;
    cin >> a >> b;
    long long int lcm =(a)/__gcd(a,b);
    cout << lcm*b<<endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
