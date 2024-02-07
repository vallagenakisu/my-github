#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    f(i, n) cin >> a[i];
    f(i, m) cin >> a[i];
    int counta = 0, countb = 0;
    int i = 0, j = 0;
    vector<int> inserted;
    int lt = 0;
    sort(a, a + n);
    sort(b, b + m);
    int halfk= k/2;
    while (counta <= halfk and countb <= halfk)
    {
        if (a[i] > k or b[i] > k)
        {
            cout << "NO" << endl;
            break;
        }
        if (a[i] <= a[j])
        {
            if (a[i] != inserted[lt])
            {
                inserted.push_back(a[i]);
                i++;
                lt++;
                counta++;
            }
            else
            {
                i++;
            }
        }
        else
        {
            if (a[j] != inserted[lt])
            {
                inserted.push_back(a[j]);
                j++;
                lt++;
                countb++;
            }
            else
                j++;
        }
    }
    if (lt == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        sol();
    }
}
