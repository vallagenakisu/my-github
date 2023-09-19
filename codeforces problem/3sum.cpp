#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
  vector<int > nums={-1,0,1,0};
  sort(nums.begin(),nums.end());
  set<vector<int>> res;
  for(int i=0;i<nums.size();i++)
  {
    int s=0,e=nums.size()-1;
    int target;
    if(nums[i]!=0) target=-nums[i];
    else target=0;
    while(s<e)
    {
    if(s==i) s++;
    if(e==i) e--;
      int sum=nums[s]+nums[e];
      if( sum < target )
      s++;
      else if( sum> target)
      e--;
      else if(sum == target)
      {
        if(s==e || e==i || s==i ) continue;
        else {
        vector<int> temp={nums[s],nums[e],nums[i]};
        sort(temp.begin(),temp.end());
        res.insert(temp);s++;
        }
      }
    }
  }
  vector<vector<int>> rest;
  for(auto x : res)
  {
    vector<int> temp;
    for( auto y : x)
    {
      temp.push_back(y);
    }
    rest.push_back(temp);
  }
  for(auto x: rest)
  {
    for(auto y: x )
    cout<<y<<" ";
    cout<<endl;
  }
  //return rest;
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
