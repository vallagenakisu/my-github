#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s;
        if(b>c)
        {
            s=b;
        }
        else if(c>b)
        {
            s=2*c-b;
        }
        if(s==a)
        cout<<3<<endl;
        else if(s>a)
        cout<<1<<endl;
        else if (s<a)
        cout<<2<<endl;
    }
}