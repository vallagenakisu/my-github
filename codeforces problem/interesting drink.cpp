#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol( vector<int> &a)
{
    int q;
    cin>>q;
    auto upper1=upper_bound(a.begin(),a.end(),q);
    cout<<(upper1-a.begin() )<<endl;

}
int main()
{
  int n;
  cin>>n;
  vector<int> a;
  f(i,n)
  {
    int f;
    cin>>f;
    a.push_back(f);
  }
  int q;
  cin>>q;
  sort(a.begin(),a.end());
  while(q--)
  {
    sol(a);
  }
}
