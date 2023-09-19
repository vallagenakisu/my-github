#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n , k ;
    cin >> n >> k;
    int a[n],b[n];
    f(i,n) cin >> a[i];
    f(i,n) cin >> b[i];
    vector<int> sum;
    for(int i =0 ; i < n ;i++)
    {
        for(int j =0 ; j<n;j++)
        {
            sum.push_back(a[i]+b[j]);
        }
    }
    sort(sum.begin() , sum.end());
    for(auto x : sum)
    cout << x << " ";
    
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
