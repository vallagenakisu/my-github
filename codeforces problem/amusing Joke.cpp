#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    string c;
    cin>>a>>b>>c;
    a=a+b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    int cnt=0;
    if(a.size()!=c.size())
    {cout<<"NO";
    return 0;
    }
    else
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==c[i])
            cnt++;
            else
            {
                cnt=0;
                break;
            }
        }
    }
    if(cnt>0)
    cout<<"YES";
    else
    cout<<"NO";
}