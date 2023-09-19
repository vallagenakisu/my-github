#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    int c;
    if(a%b==0)
    cout<<0<<endl;
    else if(a<b)
    {
        cout<<b-a<<endl;
    }
    else if(a>b)
    {
        c=a/b+1;
        cout<<(c*b-a)<<endl;
    }
    }

}