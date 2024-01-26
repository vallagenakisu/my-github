#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    f(i, n) cin >> a[i];
    int l = 0, r = 0;
    int cur_max = a[l], cur_min = a[l], s_max = a[l], s_min = a[l], cur_diff = 0;
    int cur_max_pos = l, cur_min_pos = l;
    int res = 0;
    for (l = 0; l < n; l++)
    {
        while (cur_diff <= k and r < n)
        {
            r++;
            if (a[r] < cur_min)
            {
                cur_min = a[r];
                cur_min_pos = r;
            }
            if (a[r] > cur_max)
            {
                cur_max = a[r];
                cur_min_pos = r;
            }
            if (r != cur_min_pos and a[r] <= s_min)
                s_min = a[r];
            if (r != cur_max_pos and a[r] >= s_max)
                s_max = a[r];
            cur_diff = cur_max - cur_min;
        }
        if (a[l] == cur_min)
            cur_min = s_min;
        if (a[l] == cur_max)
            cur_min = s_max;
        res++;
        if (r != cur_min_pos and a[r] <= s_min)
            s_min = a[r];
    }
    cout << res << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
