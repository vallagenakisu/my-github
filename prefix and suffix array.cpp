#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    vector<string> a(2*n-2);
    for(int i=0;i<(2*n-2);i++) cin>>a[i];
    vector<string> v(2);
    int c=0;
    for(int i=0;i<(2*n-2);i++)
    {
        if(a[i].size()==n-1)
        {
            v[c]=a[i];
            c++;
        }
    }
    reverse(v[1].begin(),v[1].end());
    if(v[0]==v[1])
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}