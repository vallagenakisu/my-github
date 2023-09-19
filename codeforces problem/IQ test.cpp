#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int o=0,e=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    if(o>e)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
            cout<<i+1;
            return 0;
            }
        }
    }
    else if(e>o)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1;
                return 0;
            }
        }
    }

}