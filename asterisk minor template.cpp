#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
bool same(string a,string b)
{
    if(a.size()==b.size())
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            return false;
        }
    }
    else 
    return false;
    return true;
}
void sol()
{
    string a,b;
    cin>>a>>b;
    if(same(a,b)) cout<<a<<endl;
    else if((a[a.size()-1]==b[b.size()-1]))
    cout<<"*"<<a[a.size()-1]<<endl;
    else if(a[0]==b[0]) cout<<a[0]<<"*";
    else 
    {
        int n=a.size()-1,m=b.siez()-1;
        f(i,n)
        {
            f(j,m)
            {
                
            }
        }
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
