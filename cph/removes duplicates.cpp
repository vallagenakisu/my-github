#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    vector<int> nums={1,3,5,6};
    int k;cin>>k;
    cout<<lower_bound(nums.begin(),nums.end(),k)-nums.begin();

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
