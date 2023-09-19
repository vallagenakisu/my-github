#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int l,r;
        int b[r-l+1];
        cin>>l>>r;
        int c=0;
        for(int k=l;k<=r;k++)
        {
            b[c]=k;
            c++;
        }
        for(int j=0;j<n;j++)
        {
            binary_search(a,a+n,b[i]);
        }
        



    }
}