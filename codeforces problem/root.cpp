#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
  int n;
  cin>>n;
  float eps=1e-5;
  float h=n,l=1;
  while(h-l>eps)
  {
    float mid=(h+l)/2;
    if(mid*mid < n)
    {
        l=mid;
    }
    else 
    {
        h=mid;
    }
  }
  cout<<l<<endl;
}
