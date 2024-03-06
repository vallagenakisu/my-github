#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    int zero = 0, non_zero = 0, one = 0;
    f(i, n)
    {
        cin >> a[i];
    }
    f(i, n)
    {
        if (a[i] == 0)
            zero++;
        else if (a[i] != 1)
            non_zero++;
        else if (a[i] == 1)
            one++;
    }
    if(zero <= (n+1)/2 )
    cout << 0 << endl;
    else if( non_zero!=0 and zero >(n+1)/2 )
    cout << 1 << endl;
    else 
    cout << 2 << endl;
    
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
