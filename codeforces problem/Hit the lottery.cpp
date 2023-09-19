#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int s=n;
    while(n!=0)
    {
        if(n>=100)
        {
            if(n%100==0)
            {
            c=c+n/100;
            n=0;
            }
            else
            {
            c=c+n/100;
            n=n%100;
            }
        }
        else if(n>=20)
        {
            if(n%20==0)
            {
                c=c+n/20;
                n=0;
            }
            else
            {
                c=c+n/20;
                n=n%20;
                
            }
        }
        else if(n>=10)
        {
            if(n%10==0)
            {
                c=c+n/10;
                n=0;
            }
            else
            {
                c=c+n/10;
                n=n%10;
            }
        }
        else if(n>=5)
        {
            if(n%5==0)
            {
                c=c+n/5;
                n=0;
            }
            else
            {
                c=c+n/5;
                n=n%5;
            }
       }
       else
       {
        c=c+n;
        n=0;
       }
    }
    cout<<c;
}