#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    f(i, n) cin >> a[i];
    int ways = 0;
    int cnt = 0;

    for(int mask = 0 ; mask <(1<<n) ; mask++)
    {
        int maxi = 0 , mini = 1e9, total_diff =0 ;;
        for(int i = 0 ;i < n ; i++)
        {
            if( (mask>>i) & 1)
            {
                total_diff = total_diff + a[i];
                maxi = max(a[i] , maxi);
                mini = min(a[i] , mini);
                cnt++;
            }
        }
        if( total_diff >=l and total_diff <= r and cnt>=2 and (maxi-mini) >=x)
        ways++;
    }
    cout << ways << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
