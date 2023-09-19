#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    vector<int> nums={0,1,0,1,0,1,99};
    unordered_map<int,int> maps;
    for(int i=0;i<nums.size();i++)
    maps[nums[i]]++;
    int res;
    for(auto x: maps)
    {
        if(x.second==1)res=x.first;
    }
    return res;

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
