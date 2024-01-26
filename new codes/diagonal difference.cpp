#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n][n];
    f(i,n)
    {
        f(j,n)
        cin >> a[i][j];
    }
    int d1 = 0 , d2 =0;
    f(i,n)
    {
        f(j,n)
        {
            if(i==j)
            d1 = d1 + a[i][j];
            if( i + j == n-1)
            d2 = d2 + a[i][j];
        }
    }
    cout << abs(d1-d2) << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
