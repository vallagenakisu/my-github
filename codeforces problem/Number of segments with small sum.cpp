#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long int n,sum;
    cin >> n >> sum;
    long long int a[n];
    f(i,n) cin >> a[i];
    int l = 0 ;
    int r = 0;
    long long int ans = 0,res=0;
    for(int l = 0 ; l < n ; l++ )
    {
        while( r<n and ans + a[r] <= sum )
        {
            ans = ans + a[r];
            r++;
        }
        res = res + r - l;
        ans = ans - a[l];
    }
    cout << res << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
