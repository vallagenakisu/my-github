#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
long long int xor_till_X(long long int x)
{
    long long int sum=0;
    while( x>=0 and x % 4!= 3)
    {
        sum = sum ^ x;
        x--;
    }
    return sum;
}
void sol()
{
    long long int a,b;
    cin >> a >> b ;
    long long int res=0;
    if( a!=0)
    res = xor_till_X(b) ^ xor_till_X(a-1);
    else 
    res = xor_till_X(b) ^ 0;
    cout << res ;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
