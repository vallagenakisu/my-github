#include<bits/stdc++.h>
#define f(i,n) for(long long int i=0;i<n;i++)
using namespace std;
void primefact(long long int n, vector<long long int> &s)
{
  
    for(long long int i=2;i<=n;)
    {
        if(n%i==0)
        {
            n=n/i;
            s.push_back(i);
        }
        else 
        {
          if(i==2)i++;
          else i=i+2;
        }
    }
}
void sol()
{
    long long int n;
    cin>>n;
    vector<long long int> s;
    primefact(n,s);
    // for(auto i:s)
    // cout<<i<<" ";
    // cout<<endl;
    for(long long int i=0;i<s.size();i++)
    {
      if(s[i]%2!=0) {cout<<"YES"<<endl; return;}
    }
    cout<<"NO"<<endl;
}
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
    sol();
  }
}
