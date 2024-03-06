#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m = min(a, min(b, c));
    //cout << m << endl;
    if (a == b and b == c)
    {
        cout << "YES" << endl;
        return;
    }
    if (a % m == 0 and b % m == 0 and c % m == 0)
    {
        int x = a/m + b/m + c/m;
        // cout << x << endl;
        if( x -3  <= 3 )
        {
            cout <<"YES" << endl;
            return;
        }
    }
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
