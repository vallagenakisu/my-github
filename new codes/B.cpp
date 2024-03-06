#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 2e5 + 1;
int num[N];
void sol()
{
    int n;
    cin >> n;
    int ar[n];
    int m = -1;
    f(i, n) cin >> ar[i];
    sort(ar, ar + n);
    m = ar[n - 1];
    int dif[n];
    f(i, n )
    {
        dif[i] = ar[i] + ar[i + 1];
    }
    f(i,n)
    cout << dif[i] <<" ";
    cout << endl;
    f(i, n)
    {
        num[dif[i]] = -1;
    }
    int ans = INT_MAX;
    //cout << num[0] << endl;
    f(i, N)
    {
        if(num[i] !=-1)
        ans = min(ans , num[i]);
    }
    cout << ans << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f(i, N) num[i] = i;
    cin >> t;
    while (t--)
    {
        sol();
    }
}
