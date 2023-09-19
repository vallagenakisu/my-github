#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{

}
int main()
{
  int n;
  cin>>n;
  string a[n];
  f(i,n) cin>>a[i];
  f(i,n)
  {
    f(j,n)
    {
        if(a[i]==a[j])
        {
            int f=1;
            if(i==j)
            {
                cout<<"OK"<<endl;
            }
            else 
            {
                cout<<a[i]<<f<<endl;
                f++;
            }
        }
    }

  }
}
