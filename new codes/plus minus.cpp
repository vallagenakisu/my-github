#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    int a[n];
    f(i,n) cin >> a[i];
    double pos = 0 , neg = 0 , zero = 0;
    f(i,n)
    {
        if(a[i] > 0 )
        pos++;
        if(a[i] < 0) 
        neg++;
        if(a[i] == 0)
        zero++;
    }
    cout << setprecision(8) << pos/n*1.0 <<endl<< neg/n*1.0 <<endl<< zero/n*1.0<<endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
