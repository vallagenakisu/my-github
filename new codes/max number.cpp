#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 1e3;
int a[N];
int maxx ;
int rec(int n)
{
    if(n == 0)
    return maxx = max(maxx,a[n]);
    rec(n-1);
    return maxx = max(maxx,a[n]);
}
void sol()
{
    int n;
    cin >> n;
    f(i,n) cin >> a[i];
    rec(n-1);
    cout << maxx ;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
