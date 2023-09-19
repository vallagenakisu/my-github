#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 2e5;
vector<int> a(N);
int n;
void lowerBound(int x)
{
    int s=0 , e = n-1;
    int ans = 0;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(  x <=a[mid] )
        {
            ans = mid ;
            e = e - 1;
        }
        else 
        s = s + 1 ;
    }
    cout << ans << endl;
}
void upperBound(int x)
{
    int s=0 , e = n-1;
    int ans = 0;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(  x <a[mid] )
        {
            ans = mid ;
            e = e - 1;
        }
        else 
        s = s + 1 ;
    }
    cout << ans << endl;
}
void sol()
{
    cin >> n;
    f(i,n)
    cin >> a[i];
    lowerBound(3);
    cout << lower_bound(a.begin(),a.end(),3) - a.begin() << endl;
    upperBound(4);
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
