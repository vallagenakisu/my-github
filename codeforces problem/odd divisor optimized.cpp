#include<bits/stdc++.h>
#define f(i,n) for(int i=2;i<=n;i++)
using namespace std;
void primeFactors(long long int *n)
{
  long long int spf[*n+1]={0};
  f(i,*n)
  {
    spf[i]=i;
  }
  f(i,*n)
  {
    if(spf[i]==i){
    for(int j=i*i;j<=(*n);j=j+i)
    {
      spf[j]=i;
    }
    }
  }
  for(int i=0;i<=(*n);i++) cout<<spf[i]<<" ";
  // while(*n>1)
  // {
  //   *n=(*n)/spf[*n];
  //   cout<<spf[*n]<<" "<<*n;
  //   cout<<endl;
  // }

}
void sol()
{
    long long int n;
    cin>>n;
    if(n==2)
    {cout<<"NO"<<endl; return;}
    vector<long long int> s;
    primeFactors(&n);
    int p=s.size();
    f(i,p)
    {
        if(s[i]%2!=0){cout<<"YES"<<endl;return;}
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
