#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=1;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else {
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>=ar[i+1])
            {
            cout<<"NO"<<endl;
            break;
            }
            else 
            c++;
        }
        if(c==n)
        cout<<"YES"<<endl;

    }
    }
}