#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string a;
    cin >> a;
    // cout << a << endl;
    reverse(a.begin(),a.end());
    int maxpos=0;
    for(int i =0 ; i < a.size() ; i++)
    {
        if(a[i] =='0')
        maxpos=max(maxpos,i);
    }
    // cout << maxpos << endl;
    string v;
    f(i,a.size())
    {
        if(i!=maxpos)
        v.push_back(a[i]);
    }
    reverse(v.begin(),v.end());
    cout << v << endl;
    
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
