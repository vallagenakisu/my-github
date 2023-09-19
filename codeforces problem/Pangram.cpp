#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    strupr(a);
    int b[28];
    for(int i=0;i<28;i++)
    b[i]=0;
    for(int i=0;i<n;i++)
    {
        b[a[i]-64]=1;
    }
    int c=0;
    for(int i=0;i<28;i++)
    {
        if(b[i]==1)
        c++;
    }
    if(c==26)
    cout<<"YES";
    else
    cout<<"NO";

}