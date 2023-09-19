#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    set<vector<int>> a;
    // vector<int> temp={1,2,3};
    // vector<int > temp1={1,2,3};
    // a.insert(temp);
    // a.insert(temp1);
    // for(auto x : a)
    // {
    //     for(auto i :x)
    //     cout<<i<<" ";
    // }
    set<int> x={1,5,2,4,3,6};
    for(auto i: x)
    {
        cout<<i<<" ";
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
