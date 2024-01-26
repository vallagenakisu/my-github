#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol(int a, int b, int c)
{
    int d1 = b-a;
    int d2 = c-b;
    if(d1 == d2)
    {
        cout << "AP" << " " << c+d1<<endl;
        return;
    }
    else 
    {
        int r1 = b/a;
        int r2 = c/b;
        cout << "GP" << " " << c*r1<<endl;
        return ;
    }
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 and b == 0 and c == 0)
            break;
        else
        {
            sol(a, b, c);
        }
    }
}
