#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,f;
    cin>>n>>k;
    if(n%2==0)
    {
    if(k<=n/2)
    {
        f=1+2*(k-1);
        cout<<f;
    }
    else
    {
        long long int x=(k-n/2);
        f=1+(2*(x-1)+1);
        cout<<f;
    }
    }
    else
    {
    
    if(k<=(n/2+1))
    {
        f=1+2*(k-1);
        cout<<f;
    }
    else
    {
        long long int x=(k-(n/2+1));
        f=1+(2*(x-1)+1);
        cout<<f;
    }
    }

}