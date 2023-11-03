#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 1e4+9;
int n , k ;
int a[N];
bool ok(double s) 
{
    int sum =0 ;
    f(i,n)
    {
        sum = sum + floor(a[i] /s); 
        if(sum>=k) return true;
    }
    return false;
}
void sol()
{
    cin >> n >> k;
    f(i,n)
    {
        cin >> a[i];
    }
    double s = 0 , e = 1e7 , ans;

    while(e-s > 1e-7)
    {
        double mid = s + (e-s)/2;
        if(ok(mid))
        {
            ans = mid;
            s = mid ;
        }
        else 
        {
            e = mid ;
        }
    }
    cout << fixed << setprecision(10)  << ans;
    //cout << ok(200.51);

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
