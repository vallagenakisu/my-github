#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
int n, t;
vector<vector<int>> ans;
vector<int> ds;
vector<int> c;
void recursion(int index, int target)
{
    if (index == n)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        return;
    }

    // taking
    if (c[index] <= target)
    {
        ds.push_back(c[index]);
        recursion(index + 1, target - c[index]);
        ds.pop_back();
    }
    // not taking
    recursion(index + 1, target);
}
void sol()
{
    cin >> n >> t;
    f(i, n)
    {
        int a;
        cin >> a;
        c.push_back(a);
    }
    recursion(0, t);
    for (auto x : ans)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
