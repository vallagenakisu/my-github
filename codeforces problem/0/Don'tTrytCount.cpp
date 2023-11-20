#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
bool compare(string a, string b)
{
    if(a==b) return true;
    int l = a.size();
    int j = b.size();
    int k = 0, c = 0;
    if (l > j)
    {
        for (int i = 0; i < l; i++)
        {
            while (a[i] == b[k])
            {
                i++;
                k++;
                if (k == j)
                    return true;
                if (a[i] != b[k])
                {
                    k = 0;
                    i--;
                    break;
                }
            }
        }
    }
    else
        return false;
    return false;
}
void sol()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    if (x == s)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < 7; i++)
    {
        if (compare(x, s))
        {
            cout << i << endl;
            return;
        }
        x = x + x ;
    }
    cout << -1 << endl;
    return;
    // string a = "aabbaabb";
    // string b = "ba";
    // cout << compare(a,b);
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
