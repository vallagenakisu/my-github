#include<bits/stdc++.h>
using namespace std;
int v[20000001];
bool a[20000001]={0};
void sieve()
{
    for(int i=2;i*i<20000001;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<20000001;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    int c=0;
    for(int i=2;i<20000001;i++)
    {
        if(a[i]==0)
        {
            v[c]=i;
            c++;
        }
    }
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<v[k-1]<<endl;
    }
}