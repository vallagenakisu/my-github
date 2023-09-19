#include<bits/stdc++.h>
using namespace std;
bool perfect(string a)
{
    for(int i=0;i<a.size()-2;i++)
    {
        if(a[i]==a[i+1])
        return false;
    }
    return true;
}
void sol()
{
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    cout<<perfect(a);
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