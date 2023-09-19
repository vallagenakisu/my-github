#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==k)
        cout<<1<<endl;
        if(n>k)
        {
            float s;
            s=2*k/n;
            cout<<ceil(s)<<endl;
        }
        if(n<k)
        {
            cout<<k/n<<endl;
        }

    }
}