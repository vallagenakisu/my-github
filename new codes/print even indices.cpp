#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 1e4;
int a[N];
void rec(int n)
{
    if( n == 0)
    {
        cout << a[n];
        return;
    }
    if( n % 2 == 0)
    cout << a[n] << " ";
    rec(n-1);
}
void sol()
{
    int n;
    cin >> n;
    f(i,n)
    cin >> a[i];
    rec(n-1);

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
