#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,b=0;
        cin>>n;
        int a[n];
        char s[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        cin>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {c++;
                if(s[i]==s[j])
                b++;
                }
            }
        }
        if(b>=c)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}