#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
bool maxi(int a[],int n)
{
    int m=a[n-1];
    for(int i=0;i<n;i++)
    {
        if(m<a[i])
        return false;
    }
    return true;
}
void sol()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    f(i,n) cin>> a[i];
    f(i,n) cin>>b[i];
    swap(a[n-1],b[n-1]);
    if(maxi(a,n) && maxi(b,n)) cout<<"YES"<<endl;
    else 
    {
        f(i,n)
        {
            if(a[n-1]<b[n-1])
            {
                if(a[i]>b[i]) 
                {
                    swap(a[i],b[i]);
                    if(maxi(a,n) && maxi(b,n)) 
                    {
                        cout<<"YES"<<endl;
                        return;
                    }
                }
            }
            else 
            {
                if(a[i]<b[i])
                {
                swap(a[i],b[i]);
                if(maxi(a,n) && maxi(b,n)) 
                {
                    cout<<"YES"<<endl;
                    return;
                }
                }
            }
            
        }
        cout<<"NO"<<endl;
    }
    

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
