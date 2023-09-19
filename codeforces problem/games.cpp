#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=2*n;
    int a[x];
    for(int i=0;i<x;i++)
    cin>>a[i];
    int c=0;
    for(int i=0;i<x;i=i+2)
    {
        for(int j=1;j<x;j=j+2)
        if(a[i]==a[j])
        c++;

    }
    cout<<c;
    
    
}