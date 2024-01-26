#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    f(i, n) cin >> a[i];
    long long int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j] == 0)
            break;
            result++;
        }
    }
    cout  << result << endl;
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
