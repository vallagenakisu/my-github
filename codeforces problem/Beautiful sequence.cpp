#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int min(int a[],int n)
{
    int m=INT_MAX;
    f(i,n)
    {
        if(a[i] <m)
        m=a[i];
    }
    return m;
}
void sol()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    f(i,n)
    {
        cin>>a[i];
        b[i]=i+1;
    }
    int m=min(a,n);
    if(n<m) {
        cout<<"NO"<<endl;
        return;
    }
    f(i,n)  
    {
      f(j,n)
        {
            if(a[j]==b[j])
            {cout<<"YES"<<endl;return;}
        }
        f(j,n)
        b[j]--;
    }
     cout<<"NO"<<endl;
    
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
