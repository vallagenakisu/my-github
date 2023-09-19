#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
  int n;
  cin>>n;
  vector< vector<int> >a(n);
  for(int i=0;i<n;i++)
  {
    int f;
    cin>>f;
    vector<int> marry;
    for(int j=0;j<f;j++)
    {
      int c;cin>>c;
      marry.push_back(c);
    }
    a.push_back(marry);
  }

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    sol();
  }
}
