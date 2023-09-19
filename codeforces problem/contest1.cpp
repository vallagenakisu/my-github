#include<bits/stdc++.h>
using namespace std;
int sl(int a[],int n,int d)
{
    int s=INT_MIN;
    int c=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        c++;
    }
    if(c==n)
    return d;
    else{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=d)
        {
            s=max(s,a[i]);
        }
    }
    return s;
    }
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
        int b[n];
        int s=*max_element(a,a+n);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==s)
            c++;
        }
        if(c>1)
        {
            for(int i=0;i<n;i++)
            {
                b[i]=a[i]-s;
            }
        }
        else
        {
            int m=sl(a,n,s);
            for(int i=0;i<n;i++)
            {
                if(a[i]!=s)
                {
                    b[i]=a[i]-s;
                }
                else
                {
                    b[i]=a[i]-m;
                }
            }
        }

        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl; 
    }
}