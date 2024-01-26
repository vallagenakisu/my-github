#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0 ;
    for(int i =1; i <= n ; i ++ )
    {
        sum = sum +(1/(i*1.0));
    }
    cout << setprecision(5) << sum << endl;
}