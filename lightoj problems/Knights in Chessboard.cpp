#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
     int m,n;
     cin>>m>>n;
     int s=m*n;
     int a;
     if(m==1 || n==1)
     cout<<"Case "<<i<<": "<<max(m,n)<<endl;
     else if(m==2 || n==2)
     {
        int s=0;
        if(m*n%8<=4)
        s=m*n%8;
        else
        s=4;
        cout<<"Case "<<i<<": "<<(m*n/8)*4+s<<endl;
     }
     else
     cout<<"Case "<<i<<": "<<(m*n+1)/2<<endl;

    }

}