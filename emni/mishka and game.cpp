#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mish=0,chris=0;

    while(n--)
    {
        int c,m;
        cin>>m>>c;
        if(m>c)
        mish++;
        else if(c>m)
        chris++;
    }
    if(chris>mish)
    cout<<"Chris";
    else if(mish>chris)
    cout<<"Mishka";
    else 
    cout<<"Friendship is magic!^^";
}