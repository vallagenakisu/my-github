#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    while(n--)
    {
        char a[100];
        cin>>a;
        if(strlen(a)==11)
        {
            if(a[0]=='T')
            c=c+4;
            else
            c=c+20;
        }
        else if(strlen(a)==4)
        c=c+6;
        else if(strlen(a)==10)
        c=c+8;
        else if(strlen(a)==12)
        c=c+12;
    }
    cout<<c;
}