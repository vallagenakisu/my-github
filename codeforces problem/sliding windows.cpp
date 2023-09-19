#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int sol()
{
	string a;cin>>a;
    string b;cin>>b;
	int alpha[27];
	for(int i=0;i<27;i++)alpha[i]=0;
	for(int i=0;i<b.size();i++)
    alpha[b[i]-96]++;
    int w=b.size();
    int s=0,e=s+w-1;
    int c=0;
    int res=0;
    int dis=0;
    for(int i=0;i<27;i++)if(alpha[i] >0 ) dis++;
    while(e<a.size())
    {
        c=0;
        int alpha2[27];
        for(int i=0;i<27;i++)alpha2[i]=0;
        for(int i=s;i<=e;i++)
        {
            alpha2[a[i]-96]++;
        }
        for(int k=0;k<27;k++)
        {
            if(alpha[k]==alpha2[k] && alpha[k]!=0)
            c++;
        }
    if(c==dis) res++;
    e++;s++;
    }
    return res;
	    

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cout<<sol();
  }
}
