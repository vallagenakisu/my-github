#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 2e5+7;
int pre[N];
//pre[0] = 0;
int s(int n)
{
  int sum = 0;
  while(n)
  {
    sum = sum + n %10;
    n = n / 10;
  }
  return sum;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 1; i <= N; i++)
  {
    pre[i] = pre[i-1] + s(i);
  }
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    //cout << n << " ";
    cout << pre[n] << endl;
  }
}
