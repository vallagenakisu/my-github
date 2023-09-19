#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    long long int s=0;
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<m;i++)
    {
        if(i==0)
        s=s+a[i];
        else 
        {
            if(a[i]>=a[i-1])
            {
                s=s+abs(a[i]-a[i-1]);
            }
            else 
            {
                s=s+n-a[i-1];
                s=s+a[i]%n;
            }
        }
    }
    cout<<s-1;
}