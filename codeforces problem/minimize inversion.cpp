#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n] , b[n];
    f(i,n) cin >> a[i];
    f( i , n ) cin >> b[i];
    map<int,int> mp;
    for(int i = 0 ; i < n ; i++) mp[a[i]] = i;
    sort(a , a+n);
    f(i,n)
    cout << a[i]<<" ";
    cout << endl;
    for(int i =0 ; i<n;i++)
    {
        cout << b[mp[a[i]]] <<" ";
    }
    cout << endl;

    
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}
