#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n, t;
    cin >> n >> t;
    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1;
            return;
        }
        while (n)
        {
            if (n == 1)
            {
                cout << 0;
                return;
            }
            cout << 1;

            n--;
        }
    }
    else
    {
        while (n)
        {
            cout << t;
            n--;
        }
    }
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
