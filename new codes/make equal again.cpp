#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    f(i, n) cin >> a[i];
    map<int, int> freq;
    int uniqueFlag = 1;
    f(i, n)
    {
        freq[a[i]]++;
        if (freq[a[i]] > 1)
        {
            uniqueFlag = 0;
        }
    }
    for (auto x : freq)
    {
        if (x.second == n)
        {
            cout << 0 << endl;
            return;
        }
    }
    if (uniqueFlag)
    {
        cout << n - 1 << endl;
        return;
    }
    int k = -1, lk = -1,ki = -1 , li = -1  ;
    f(i, n - 1)
    {
        if (a[i] == a[0])
        {
            k++;
            ki = i;
        }
        else 
        break;
    }
    for(int i = n -1 ; i >=1 ; i--)
    {
        if(a[i] == a[n-1])
        {
            lk++;
            li = i;
        }
        else
        break;
    }
    if (k != -1)
        k = k + 1;
    if (lk != -1)
        lk = lk + 1;
    cout << k <<" " << lk << endl;
    if(lk == k and a[0] == a[n-1])
    {
        cout << n - 2 * k << endl;
        return;
    }
    else if(lk != k and a[0] == a[n-1])
    {
        cout << abs( ki - li +1) << endl;
    }
    else 
    {
        int ans = max(k , lk);
        cout << n - ans << endl;
    }

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
