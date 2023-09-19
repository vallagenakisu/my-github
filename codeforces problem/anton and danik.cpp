#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int d=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        d++;
        else
        b++;
    }
    if(d>b)
    cout<<"Anton";
    else if(b>d)
    cout<<"Danik";
    else
    cout<<"Friendship";
}