#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int p)
{
    return((n & 1<<p)!=0);
}
int setbit(int n, int p)
{
    return(n | 1<<p );
}
int clearbit(int n, int p)
{
    return(n & ~(1<<p));
}
int updatebit(int n,int p, int k)
{
    if(k==1)
    {
      return setbit(n,p);
    }
    else
    return clearbit(n,p);
}
int main()
{
    int n,p,k;
    cin>>n>>p>>k;
    //cout<<getbit(n,p);
    //cout<<setbit(n,p);
    //cout<<clearbit(n,p);
    cout<<updatebit(n,p,k);
}