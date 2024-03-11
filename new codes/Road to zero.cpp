#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long int x , y , a , b ;
    cin >> x >> y >> a >> b;
    long long int m = min( x , y);
    long long int d = abs ( x - y );
    long long int ans1 = d*a + m*b;
    long long int ans2 = (x+y)*a;
    long long int ans3 = m*b + d*a;
    long long int real = min(ans1,min(ans2,ans3));
    cout << real << endl;

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
