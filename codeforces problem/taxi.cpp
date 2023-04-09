#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,a=1;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int a1=0,a2=0,a3=0,a4=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==1)
        a1++;
        else if(ar[i]==2)
        a2++;
        else  if(ar[i]==3)
        a3++;
        else if(ar[i]==4)
        a4++;
    }
    c=c+a4;
    if(a3<a1 && a3!=0)
    {
        c=c+a3;
        a1=a1-a3;
        a3=0;
    }
    else if(a3>a1 && a1!=0)
    {
        c=c+(a3-a1);
        a3=a3-a1;
        c=c+a3;
        a1=0;
        a3=0;
    }
    else if(a1==a3)
    {
        c=c+a3;
        a3=0;
        a1=0;
    }
    if(a2%2==0)
    {
        c=c+a2/2;
        a2=0;
    }
    else if(a2%2!=0 && a2>1)
    {
        c=c+a2-1/2;
        a2=1;
    }
    if(a2!=0 && a1==0)
    {
        c=c+a2;
        a2=0;
    }
    if(a1>2*a2 && a2!=0)
    {
        c=c+(a1-2*a2);
        a2=0;
        a1=a1-2*a2;
        c=c+a1;
        a1=0;
    }
    else if(a1==2*a2 && a1!=0 && a2!=0)
    {
        c=c+1;
        a1=0;
        a2=0;
    }
    if(a1!=0)
    {
        if(a1%4==0)
        {
            c=c+a1/4;
            a1=0;
        }
        else 
        {
            c=c+(a1/4)+1;
            a1=0;
        }
    }
    if(a3!=0)
    {
        if(a3%4==0)
        {
            c=c+a3-a3/4;
            a3=0;
        }
        else{
        c=c+a3;
        a3=0;
        }
    }
    cout<<c;
}