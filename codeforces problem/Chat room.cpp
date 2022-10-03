#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1;
    string s;
    cin>>s;
    int x;
    x=s.length();
    for(int i=0;i<x-1;i++)
    {
        if(s[i]=='h')
        {
            if(s[i+i]!='h' && s[i+1]!='e')
            {
            cout<<"NO";
            break;
            }
        }
        else if(s[i]=='e')
        {
            if(s[i+1]!='e' && s[i+1]!='l')
            {
              cout<<"NO";
              break;
            }
        }
        else if(s[i]=='l')
        {
            if(s[i+1]!='l' && s[i+1]!='o')
            {
                cout<<"NO";
                break;
            }
        }
        c++;
    }
    if(c==x)
    cout<<"YES";
}