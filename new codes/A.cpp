#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 1e6;
int ar[N + 1];
int dif(int a)
{
    int ma = INT_MIN;
    int mi = INT_MAX;
    while (a)
    {
        ma = max(ma, a % 10);
        mi = min(mi, a % 10);
        a = a / 10;
    }
    return abs(ma - mi);
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for (int i = 1; i <= N; i++)
    {
        ar[i] = dif(i);
    }
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = -1;
        int m = INT_MIN;
        if (l <= 100)
        {
            for (int i = l; i <= r; i++)
            {
                if (m < ar[i])
                {
                    m = ar[i];
                    ans = i;
                }
            }
            cout << ans << endl;
        }
        else if (r - l + 1 <= 1000)
        {
            for (int i = l; i <= r; i++)
            {
                if (m < ar[i])
                {
                    m = ar[i];
                    ans = i;
                }
            }
            cout << ans << endl;
        }
        else if (r - l + 1 > 1000)
        {
            for (int i = l; i <= l+1000; i++)
            {
                if (m < ar[i])
                {
                    m = ar[i];
                    ans = i;
                }
            }
            cout << ans << endl;
        }
    }
}
