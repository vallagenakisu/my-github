#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    long long int n , k ;
    cin >> n >> k;
    // if( k <= 2*n)
    // {
    //     int x = ceil(k/2.0);
    //     cout << x <<endl;
    //     //cout <<"first";
    // }
    if( k < (4*n-2 ))
    {
        // if(k % 2 == 0)
        // cout << (k/2) +1 << endl;
        // else 
        int x = ceil(k/2.0);
        cout << x << endl;
    }
    else if(k == (4*n-2))
    {
        cout << 2*n << endl;
        //cout << "3rd";
    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin>>t;
  while(t--)
  {
    sol();
  }
}
