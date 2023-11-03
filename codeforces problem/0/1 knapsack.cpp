#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,max_weight;
    cin >> n>> max_weight;
    int profit[n+1],weight[n+1];
    for(int i =0 ; i< n ;i++)
    {
        cin >> profit[i];
    }
    for(int i =0 ; i < n ;i++)
    cin >> weight[i];
    
    int v [n+1][max_weight+1];
    for(int i =0 ; i<=n;i++ )
    {
        for(int w=0 ; w<=max_weight ; w++)
        {
            if(w == 0 or i == 0)
            v[i][w] = 0;
            else if( weight[i] <=w ) 
            {
                v[i][w] = max ( profit[i] + v[i-1][w-weight[i]], v[i-1][w]);
            }
            else 
            v[i][w] = v[i-1][w];
        }
    }
    for(int i=0 ; i<=n ; i++)
    {
        for(int w=0;w<=max_weight;w++)
        {
            cout << v[i][w] << " ";
        }
        cout << endl;
    }
}