#include<bits/stdc++.h>
using namespace std;
void solve(string b,char c)
{
    int s=0,e=0;
    int ans=INT_MIN;
    for(s=0;s<b.size()-1;s++)
    {
        if(b[s]==c)
        {
            e=s;
            while(b[e]!='g' && e<=b.size()-1)
            e++;
            ans=max(ans,abs(s-e));
            s=e;
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;char c;
        cin>>n>>c;
        string a;
        cin>>a;
        string b;
        b=a+a;
        solve(b,c);

    }
}