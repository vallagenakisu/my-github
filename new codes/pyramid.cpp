#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void printStar(int n)
{
    if( n == 0 )
    return ;
    printStar(n-1);
    cout << "*";
}
void printSpace(int n)
{
    if(n==0)
    return ;
    printSpace(n-1);
    cout << " ";
}
void pyramid(int n, int x)
{
    if (n == 0)
        return;

    pyramid(n - 1, x);
    printSpace( x-n );
    printStar(2*n-1);
   
    cout << endl;
    // for (int i = 0; i < x - n; i++)
    //     cout << " ";
    // for (int i = 0; i < (2 * n - 1); i++)
    //     cout << "*";
    //cout << endl;
}

void sol()
{
    int n;
    cin >> n;
    int x = n;
    pyramid(n, x);
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
