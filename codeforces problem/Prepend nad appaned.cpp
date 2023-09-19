#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int s=0,e=n-1;
        int l=n;
        while(l!=0)
        {
            if(a[s]=='0' && a[e]=='1')
            {
                s++;e--;
                l=l-2;
            }
            else if(a[s]=='1' && a[e]=='0')
            {
                s++;e--;
                l=l-2;
            }
            else 
            break;
        }
        cout<<l<<endl;
    }
}