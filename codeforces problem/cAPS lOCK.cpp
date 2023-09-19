#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    cin>>c;
    int d=0;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]<97)

        d++;
    }
    if(d==c.size())
    {
        for(int i=0;i<c.size();i++)
        {
            c[i]=c[i]+32;
        }
    }
    else if(d==c.size()-1 && c[0]>=97)
    {
        c[0]=c[0]-32;
        for(int i=1;i<c.size();i++)
        {
            c[i]=c[i]+32;
        }
    }
    cout<<c;
    
}