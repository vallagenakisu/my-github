#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int sol()
{
    string s;cin>>s;
    int f=0,e=0;
    int k=0;
    unordered_map<char,int> alpha;
    int res=0;
    while(e<s.size())
    {
      alpha[s[e]]++;
      if(alpha.size()==e-f+1)
      {
        res=max(res,e-f+1);
       
      }
      else if(alpha.size() < e-f+1)
      {
        while(  alpha.size()<e-f+1 )
        {
          alpha[s[f]]--;
          if(alpha[s[f]]==0)
          alpha.erase(s[f]);
          f++;
        }
      }
      e++;
    }
    return res;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cout<<sol()<<endl;
  }
}
