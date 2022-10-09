#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        while(n>1)
        {
            if(n%2!=0)
            {
            cout<<"NO"<<endl;
            break;
            }
            else
            n=n/2;
        }
        if(n==1)
        cout<<"YES"<<endl;
    }
}