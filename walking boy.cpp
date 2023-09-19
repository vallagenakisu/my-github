#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n]=1440;
    for(int i=0;i<n;i++) cin>>a[i];
    int pf[105]={0};
    pf[0]=a[0];
    for(int i=1;i<n+1;i++)
    {
        pf[i]=a[i]-a[i-1];
    }
    int s=0;
    for(int i=0;i<n+1;i++)
    {
        if(pf[i]>=120 && pf[i]<240)
        s++;
        else if(pf[i]>=240)
        s=s+2;
    }
    if(s>=2)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}