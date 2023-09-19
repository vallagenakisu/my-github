#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
   int s=1;
   while(n)
   {
    s=s*n;
    n--;
   }
   return s;
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int l=10-n;
     cout<<6*(fact(l)/(fact(2)*fact(l-2)))<<endl;
    }

    
}