#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol2()
{
    int a , b;
    cin >> a >> b;
    if(a < b)
    {
        int dif = b-a;
        cout << (int)ceil(dif/10.0)<<endl;
    }
    else 
    {
        int dif = a-b;
        cout << (int)ceil(dif/10.0)<<endl;

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
        sol2();
    }
}
