#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n ;
    int a[n];
    f(i,n) cin >> a[i];
    sort(a,a+n);
    int sum = 0;
    for(int i = 1 ; i < n ; i++)
    {
        sum = sum + ( a[i] - a[i-1] );
    }
    cout << sum << endl;

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
