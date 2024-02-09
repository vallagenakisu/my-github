#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    while (n and m)
    {
        count++;
        n--;
        m--;
    }
    if (count % 2 == 0)
    cout << "Malvika";
    else 
    cout <<"Akshat";
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
