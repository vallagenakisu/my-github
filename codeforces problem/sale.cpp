#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    f(i, n) cin >> a[i];
    sort(a, a + n);
    int sum = 0;
    f(i,m)
    {
        if(a[i]<=0)
        sum = sum + a[i];
    }
    cout << abs(sum);
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
