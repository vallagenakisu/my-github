#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    //cout << n <<endl;
    int a[n];
    f(i, n) cin >> a[i];
    int alphabet[30];
    f(i, 30) alphabet[i] = 0;
    //cout << endl;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j =0 ; j <30;j++)
        {
            if(a[i] >= alphabet[j] )
            {
                alphabet[j]++;
                char c = 'a'+ j;
                cout << c ;
                break;
            }
        }
    }
    // cout << endl;
    // f(i,30) cout<< alphabet[i] <<" ";

    
    
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
        cout << endl;
    }
}
