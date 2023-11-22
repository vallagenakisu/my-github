#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
  long long int n;
  cin >> n;
  if( n & (n-1))
  cout << "YES" <<endl;
  else 
  cout << "NO" << endl;
}

int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  while (t--)
  {
    sol();
  }
}
