#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    // cout << a << endl;
    map<char, int> mp;
    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }
    int odd = 0, even = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (mp[i] % 2 == 0 and mp[i] != 0)
            even++;
        else if (mp[i] % 2 != 0 and mp[i] != 0)
            odd++;
    }
    if(odd > k+1)
    cout <<"NO" << endl;
    else 
    cout <<"YES"<< endl;

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
