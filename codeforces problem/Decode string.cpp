#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char b[100];
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            int s=0;
            if(a[i]==0)
            continue;
            else if(a[i+2]==0)
            {
                s=a[i]*10+a[i+1];
                b[i]=96+s;
            }
            else 
            {
                s=a[i];
                b[i]=s+96;

            }

        }
        cout<<b;
    }
}