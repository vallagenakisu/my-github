#include<bits/stdc++.h>
using namespace std;
void sol()
{
    long long int n;
    cin>>n;
    long long int s=0;
    long long int i=0,j=1;
    if(n==1)    cout<<0<<endl;
    else {
    while(n>0)
    {
        if(j==1)
        {s=s+1;j=j+2;i++;}
        else if(j==3)
        {s=s+7;j=j+2;i++;}
        else
        {
            long long int f=j*j-((j-2)*(j-2));
            s=s+i*f;
            i++;
            j=j+2;
        }
        n=n-2;
    }
    cout<<s<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    sol();
}