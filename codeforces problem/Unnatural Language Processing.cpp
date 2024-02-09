#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
bool consonant(char a)
{
    if (a == 'b' or a == 'c' or a == 'd')
        return true;
    return false;
}
void sol()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    //cout << a.size();
    string ans;
    for(int i = a.size() - 1 ; i >=0 ; i-- )
    {
        if( consonant(a[i]) and !consonant(a[i-1]) and 
        consonant(a[i-2]))
        {
            ans.push_back(a[i]);
            ans.push_back(a[i-1]);
            ans.push_back(a[i-2]);
            ans.push_back('.');
            i = i - 2;
        }
        if(!consonant(a[i]) and consonant(a[i-1]))
        {
            ans.push_back(a[i]);
            ans.push_back(a[i-1]);
            ans.push_back('.');
            i--;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i = 1 ; i<ans.size();i++)
    cout << ans[i];
    cout << endl;

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
