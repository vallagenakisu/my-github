#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void rec(int n)
{
    if(n==0)
    return;
    rec(n/2);
    cout << n % 2 ;
}
void sol()
{
    int n;
    cin >> n;
    rec(n);
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
    cout << endl;
  }
}
