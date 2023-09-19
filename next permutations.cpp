#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int l,r;
    cin >> l >>r ;
    if(r<l*2){cout<<-1<<" "<<-1<<endl; return;}
    if(l==1)
    {
        cout<< l*2 <<" "<< l*4 <<endl;
    }
    else 
    {
        cout<< l <<" "<<l*2<<endl;
    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}
