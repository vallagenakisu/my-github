#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n ;
    cin >> n ;
    int a[n];
    map<int,int> frq;
    f(i,n)
    {
        cin >> a[i];
        frq[a[i]]++;
    } 
    for(auto x : frq)
    {
        if(x.second == n)
        {
            cout <<"NO" << endl;
            return;
        }
    }
    f(i,n-1)
    {
        if(a[i] == 0 and i !=0 )
        {
            cout <<"NO" << endl;
            return;
        }
        else if( abs(a[i] - a[i+1]) >3 )
        {
            cout <<"NO" << endl;
            return;
        }
    }
    cout <<"YES" << endl;

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
