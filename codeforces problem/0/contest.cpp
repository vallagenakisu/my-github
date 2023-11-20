#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n ;
    cin >> n;
    int check = 1;
    int operation = 10;
    while(operation--)
    {
        n++;
        if(check % 2 != 0)
        {
            if(n % 3 == 0)
            {
                cout <<"First " << endl;
                return;
            }
        }
        else 
        {
            if(n % 3 == 0)
            {
                cout << "Second " << endl;
                return ;
            }
        }
        check++;
    }
    cout << "Second " << endl;
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
