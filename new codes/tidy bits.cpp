#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    unsigned int n;
    cin >> n;
    int x = __builtin_popcount(n);
    cout << (1<<x)-1 << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
