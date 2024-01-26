#include<bits/stdc++.h>
#define f(i,n) for(int i=1;i<=n;i++)
using namespace std;
int fact(int n )
{
    int mul = 1;
    f(i,n)
    {
        mul = mul *i;
    }
    return mul;
}
void sol()
{
    int n;
    cin >> n;
    int fact1 = fact(n);
    if(fact1 > 10)
    cout << fact1 % 10 << endl;
    else 
    cout << fact1<< endl;
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
