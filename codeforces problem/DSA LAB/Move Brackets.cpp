#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{

}
int main()
{
  int n,t;
  cin>>n>>t;
  int a[n]={0};
  if(n>=2 && t==10)
  {
      a[0]=1;
      f(i,n) cout<<a[i];
  }
  else if(n==1 && t==10) cout<<-1;
  else 
  {
    f(i,n)
    {
      a[i]=t;
    }
    f(i,n) cout<<a[i];
  }
}