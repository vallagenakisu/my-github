#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int count = 0;
    int freq[a.size()];
    f(i, n) freq[i] = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'A' and a[i + 1] == 'B')
        {
            if (freq[i] != 1)
            {
                swap(a[i], a[i + 1]);
                freq[i] = 1;
                count++;
                if (i != 0)
                    i = i - 2;
                //cout << a << endl;
            }
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
