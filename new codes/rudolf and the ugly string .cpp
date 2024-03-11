#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'm')
        {
            if (i + 2 <= a.size() - 1)
            {
                if (a[i + 1] == 'a' and a[i + 2] == 'p')
                {
                    ans++;
                    i = i + 2;
                }
            }
        }
        else if (a[i] == 'p')
        {
            if (i + 2 <= a.size() - 1)
            {
                if (a[i + 1] == 'i' and a[i + 2] == 'e')
                {
                    ans++;
                    i = i + 2;
                }
            }
        }
    }
    cout << ans << endl;
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
