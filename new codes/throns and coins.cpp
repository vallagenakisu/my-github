#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    f( i , n ) cin >> a[i];
    int m = a[0];
    for(int i =1 ; i < n ; i++)
    {
        int x = a[i];
        int c =1 ;
        while ( x <= m )
        {
            c++;
            x = a[i] *c ;
        }
        m = x;
    }
    cout << m << endl;
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
