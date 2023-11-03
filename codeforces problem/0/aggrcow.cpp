#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 1e5+9;
int n , c;
int a[N];
bool ok(int x )
{
    int start = a[0];
    int cow=0;
    for(int i = 0 ; i < n ;i ++)
    {
        start = start + x;
        if(start==a[i])
        {
            i++;
            cow++;
        }

    }
}
void sol()
{
    cin >> n >> c;
    f(i,n) cin >> a[i];
    sort(a,a+n);
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
