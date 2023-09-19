#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        int o;
        cin>>s;
        if(s%2==0)
        {
            o=s/2;
            cout<<o<<endl;
        }
        else 
        {
            
            o=s/2+1;
            cout<<o<<endl;
        }
        int a=0;
        while(o--)
        {
            cout<<1+a<<" "<<s*3-a<<endl;
            a=a+3;
        }

    }
}