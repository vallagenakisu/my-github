#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    f(i,n) cin >> a[i];
    int q;
    cin >> q;
    int pref[n];
    pref[0] = a[0];
    for(int i =1 ; i<n;i++)
    {
        pref[i] = pref[i-1] & a[i];
    }
    // f(i,n)
    // cout << pref[i] << " ";
    cout << (12&21&7f);
    // while(q--)
    // {
    //     int l , k;
    //     cin >> l >> k;

    // }
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
