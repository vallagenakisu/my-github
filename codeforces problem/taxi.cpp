#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int c1,c2,c3,c4;
    c1=c2=c3=c4=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        c1++;
        if(a[i]==2)
        c2++;
        if(a[i]==3)
        c3++;
        if(a[i]==4)
        c4++;
    }
    int c=0;
    c=c+c4;
    c4=0;
    if(c1==c3)
    {c=c+c1;c1=c3=0;}
    else if(c1>c3)
    {c=c+c3;c1=c1-c3;c3=0;}
    else if(c3>c1)
    {c=c+c1+(c3-c1);c3=c1=0;}
    if(c2%2==0 && c2!=0)
    {c=c+c2/2;c2=0;}
    else if(c2%2!=0 && c2!=1 && c2!=0)
    {c=c+c2/2;c2=1;}
    if(c2!=0)
    {
        if(c1>c2)
        {c=c+1;c2=0;c1=c1-2;}
        else if(c1=c2)
        {c=c+1;c1=c2=0;}
    }
    if(c1>4)
    {
        while(c1>4)
        {
            c=c+1;
            c1=c1-4;
        }
    }
    if(c1<=4 && c1!=0)
    {c=c+1;;c1=0;}
    cout<<c;
}