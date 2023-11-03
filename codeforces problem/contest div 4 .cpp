#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    string a;
    cin >> a;
    int n = a.size();
    map<char, int> mp;
    f(i, n)
        mp[a[i]]++;
    for (auto x : mp)
    {
        if (x.second != 1 and ((x.second % 2) != 0))
        {
            cout << "NO SOLUTION";
            return;
        }
    }
    char ans[n];
    int count = n;
    int i = 0;
    // for (auto x : mp)
    // {
    //     cout << x.first << x.second << endl;
    // }
    for (auto x : mp)
    {
        if (x.second == 1)
            a[(count / 2)] = x.first;
    }
    for (auto x : mp)
    {
        while (x.second >1)
        {
            a[i] = x.first;
            x.second--;
            i++;
            a[count - i] = x.first;
            x.second--;
        }
    }
    cout << a ;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
