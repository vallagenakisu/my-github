#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 100 + 7;
vector<int> candidiates(N);
vector<vector<int>> combination;
int target;
vector<int> ans;
int n;
void recursion(int index, int target)
{
    if (index == n)
    {
        if (target == 0)
        {
            combination.push_back(ans);
            return;
        }
        return;
    }
    // taking
    if (candidiates[index] <= target)
    {
        ans.push_back(candidiates[index]);
        recursion(index, target - candidiates[index]);
        cout << target << endl;
        ans.pop_back();
    }
    recursion(index + 1, target);
}
void sol()
{

    cin >> n >> target;
    f(i, n)
    cin >>candidiates[i];
    recursion(0, target);
    //cout << combination.size();
    for(auto x : combination)
    {
        for(auto y : x)
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
