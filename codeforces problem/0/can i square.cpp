#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 1e9;
void sol()
{
    int n;
    cin >> n;
    long long int a[n];
    long long int sum = 0;
    f(i, n)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    long long int s =1 , e =N;
    while( s <= e )
    {
        long long int mid = s+(e-s)/2;
        if( mid*mid < sum )
        {
            s = mid + 1;
        }
        else if(mid*mid > sum)
        {
            e = mid - 1 ;
        }
        else if(sum == mid*mid)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout <<"NO" << endl;
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
