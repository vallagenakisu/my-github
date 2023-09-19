#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 2e5 + 9;
int n, k;
vector<long long int> a(N);
bool split(long long int x)
{
    int split =1 ;
    for(int i =0 ; i<n;i++)
    {
        if(a[i] > x ) return false ;
    }
    long long int sum = a[0];
    for(int i =1 ; i< n ;i++)
    {
        if( sum + a[i] <= x )
        {
            sum = sum + a[i];
        }
        else 
        {
            split++;
            sum = a[i];
        }
    }
    return split <= k ;
}
void binSearch()
{
    long long int l = 0, r = 2e14+9;
    long long int ans = 0;
    while (l <= r)
    {
        long long int mid = l + (r - l) / 2;
        if (split(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}
void sol()
{
    cin >> n >> k;
    f(i, n) cin >> a[i];
    binSearch();

}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
