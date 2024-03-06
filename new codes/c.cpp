#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    f(i, n) cin >> a[i];
    int sum = 0;
    f(i, n)
        sum = sum + a[i];
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else if ((sum + 1) % 3 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        f(i, n)
        {
            int x = sum - a[i];
            if (x % 3 == 0)
            {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
    }
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
