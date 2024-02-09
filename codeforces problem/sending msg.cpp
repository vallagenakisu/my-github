#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    long long int n, f, a, b;
    cin >> n >> f >> a >> b;
    long long int m[n + 1];
    m[0] = 0;
    for (int i = 1; i < n + 1; i++)
        cin >> m[i];
    // f(i,n+1) cout << m[i] <<" ";
    sort(m, m + n+1);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (a * abs(m[i + 1] - m[i]) > b)
            sum = sum + b;
        else
            sum = sum + (m[i + 1] - m[i]) * a;
    }
     //cout << sum << endl;
    if (sum < f)
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
