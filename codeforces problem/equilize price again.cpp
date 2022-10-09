#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int n;
        float s=0.00;
        cin>>n;
        float ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];
        }
        for(int k=0;k<n;k++)
        {
            s=s+ar[k];
        }
        int a;
        a=ceil(s/n);
        cout<<a<<endl;
    }
}