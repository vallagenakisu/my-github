#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;char d;
    string a;
    cin>>n>>d>>a;
    f(i,n)
    {
        if(a[i]>=d)
        cout<<a[i];
        else 
        {
            cout<<d;
            for(int j=i;j<n;j++)
            cout<<a[j];
            cout<<endl;
            return;
        }
        
    }
    cout<<d<<endl;
    return;
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
