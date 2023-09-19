#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)   
    {
        int n,q;
        long long int s=0;
        cin>>n>>q;
        int co=0,ce=0;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            s=s+a[i];
            if(a[i]%2==0)
            ce++;
            else
            co++;
        }
        for(int i=0;i<q;i++)
        {
            int tp,x;
            cin>>tp>>x;
            if(tp==1 && x%2==0)
            {
                s=s+co*x;
            }
            else if(tp==1 && x%2==1)
            {
                s=s+co*x;
                co=0;
                ce=n;
            }
            else if(tp==0 && x%2==0)
            {
                s=s+ce*x;
            }
            else if(tp==0 && x%2==1)
            {
                s=s+ce*x;
                ce=0;
                co=n;
            }
            cout<<s<<endl;
        }
    }
}