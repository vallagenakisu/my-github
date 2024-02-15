#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string a;
    for (int i = 1; i < 27; i++)
    {
        if (n - i <= 53)
        {
            int x = n - i ;
            for (int j = 1; j < 27; j++)
            {
                
                //cout << n-j <<endl;
                if (x - j <= 26)
                {
                    int z  = x - j;
                    // cout << i << endl;
                    // cout << j << endl;
                    // cout << z << endl;
                    a.push_back('a' + i -1 );
                    a.push_back('a' + j -1 );
                    a.push_back('a' + z - 1 );
                    cout << a << endl;
                    return;
                }
            }
        }
    }

    //cout << a << endl;
    // char c = 'a'+17;
    // cout << c;
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
