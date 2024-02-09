#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string a;
    if (n >= 0)
        cout << n;
    else
    {
        n = abs(n);
        while (n)
        {
            a.push_back('0' + n % 10);
            n = n / 10;
        }
        reverse(a.begin(), a.end());
        if (a[a.size() - 1] > a[a.size() - 2])
        {
            f(i, a.size())
            {
                if (!(i == a.size() - 1))
                {
                    n = n + a[i] - '0';
                    n = n * 10;
                }
            }
        }
            else
            {
                f(i, a.size())
                {
                    if (!(i == a.size() - 2))
                    {
                        n = n + a[i] - '0';
                        n = n * 10;
                    }
                }
            }
            n=n/10;
            cout << -1*n;
        }

    }
    int main()
    {
        int t;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sol();
    }
