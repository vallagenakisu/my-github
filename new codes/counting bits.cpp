#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int x = 0; x < 12 ; x++)
        {
            if (i & (1 << x))
                count++;
        }
    }
    cout << count << endl;
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
