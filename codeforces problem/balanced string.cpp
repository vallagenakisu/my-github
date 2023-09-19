#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string a;cin>>a;
    int balance=0;
    int i=0,j=0;
    vector<string> res;
    int c=0;
    while(i<a.size())
    {
        if(a[i]=='L') balance++;
        else if(a[i]=='R') balance--;
        i++;
        if(balance==0)
        {
            string temp;
            for(int k=j;k<i;k++)
            {
                temp.push_back(a[k]);
            }
            res.push_back(temp);
            j=i;
        }
    }
    
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
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
