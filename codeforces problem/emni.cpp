#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  f(i,n) cin>>a[i];
  int c=a[k-1];
  int count=0;
  f(i,n)
  {
    if(a[i]>=c && a[i]!=0) count++;
  }
  cout<<count;
}
