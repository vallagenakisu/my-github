#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
int fact(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
        mul = mul * i;
    return mul;
}
int sol(int n)
{
    int main = n;
    int sum = 0;
    while (n)
    {
        int ld = n % 10;
        sum = sum + fact(ld);
        n = n / 10;
    }
    if (sum % main == 0)
        return main;
    else
        return 0;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int sum = 0;

    for (int i = 10; i <= N; i++)
    {
        sum = sum + sol(i);
    }
    cout << sum << endl;
}
