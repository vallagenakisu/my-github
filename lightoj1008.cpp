#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];
void sol(int f)
{
    int n;
    cin>>n;
    int c=1,m=0;
    int i=1;
    for(int j=1;j<=100;j++)
        {
            if(j%2!=0)
            {
                c=m+1;
                int n=j;
                while(n--)
                {
                    a[i][j]=c;
                    c++;i++;
                    //cout<<j<<endl;
                }
                i=1;
            }
            else 
            {
                c=j*j;
                m=c;
                int n=j;
                while(n--)
                {
                    a[i][j]=c;
                    c--;i++;
                    //cout<<j<<endl;
                }
                i=1;
            }
        }
    int j=1;
    for(int i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            c=i*i;
            m=c;
            int n=i;
            while(n--)
            {
                if(a[i][j]==0) 
                a[i][j]=c;
                c--;j++;
            }
            j=1;
        }
        else 
        {
            c=m+1;
            int n=i;
            while(n--)
            {
                if(a[i][j]==0)
                a[i][j]=c;
                c++;j++;
            }
            j=1;
        }
    }
    for(int i=1;i<100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(a[i][j]==n)
            {
                cout<<"Case "<<f<<": "<<j<<" "<<i<<endl;
                break;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    int f=1;
    while(t--)
    {
        sol(f);
        f++;
    }
}
