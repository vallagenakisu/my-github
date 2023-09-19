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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int p=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            p++;
            else 
            m++;
        }
        int b[p],c[m];
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                b[x]=a[i];
                x++;
            }
            else
            {
                c[y]=a[i];
                y++;
            }
        }
        long long int s1=0,s2=0;
        for(int i=0;i<p;i++)
        s1=s1+b[i];
        for(int i=0;i<m;i++)
        s2=s2+c[i];
        long long int s3;
        if(abs(s1)>abs(s2))
        s3=abs(s1)-abs(s2);
        else 
        s3=abs(s2)-abs(s1);        
        cout<<s3<<endl;

    }
}