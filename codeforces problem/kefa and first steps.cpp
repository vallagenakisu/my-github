#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1)
    cout<<1;
    else
    {
    int c=1;
    int m=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            c++;
            m=max(m,c);
        }
        else
        c=1;
        
    }
    cout<<m;
}

}