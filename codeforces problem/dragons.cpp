#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,c=0;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s>x[i])
        {
            s=s+y[i];
            c++;
        }
    }
    if(c==n)
    cout<<"YES";
    else
    cout<<"NO";

}