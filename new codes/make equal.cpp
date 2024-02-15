#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    f(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    int avg = sum / n;
    int garbage = 0;
    for (int i = 0; i < n; i++)
    {
        garbage = garbage + a[i];
        if (garbage < avg)
        {
            cout << "NO" << endl;
            return;
        }
        garbage = garbage - avg;
    }
    cout <<"YES" <<endl;
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
