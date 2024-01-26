#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    if(n == 0 )
    {
        cout << 1 << endl;
        return;
    }
    if (n % 4 == 1)
        cout << 8 << endl;
    else if (n % 4 == 2)
        cout << 4 << endl;
    else if (n % 4 == 3)
        cout << 2 << endl;
    else if (n % 4 == 0)
        cout << 6 << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
