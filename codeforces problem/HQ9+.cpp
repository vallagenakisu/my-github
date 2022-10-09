#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c={"HQ9"};
    int b=0;
    string a;
    cin>>a;
 for(int i=0;i<c.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            if(c[i]==a[j])
            {
                b++;
            }
        }
        
    }
    if(b>0)
    cout<<"YES";
    else
    cout<<"NO";
}