#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n , x;
    cin >> n >> x;
    int a[n];
    f(i,n) cin >> a[i];
    map<int,int> mp;
    for(int i =0 ; i< n ;i ++)
    {
        if(mp.find(x-a[i])!=mp.end())
        {
            cout << mp[x-a[i]]+1 << ' ' << i+1 << endl;
            return ;
        }
        mp[a[i]] = i;
    }
    cout <<"IMPOSSIBLE" << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();  
}
