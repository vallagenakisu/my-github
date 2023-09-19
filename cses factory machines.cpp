#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N= 1e6;
int arr[N];
int n,t;
long long int res;
bool fd(long long int x )
{
    long long int sum =0;
    for(int i =0 ;i < n ; i++)
    {
        sum = sum + x/arr[i];
        if( sum >= t ) return true;
    }
    return false;
 
}
void binSearch()
{
    long long int l=0 , r = 1e18;
    while( l <= r )
    {
        long long int mid = (l+r)/2;

        if( fd(mid) )
        {
            res = mid;
            r = mid - 1 ;
        }
        else 
        {
            l = mid +1;
        }

    }
    cout << res << endl;
}
void sol()
{ 
    cin >> n >> t;
    f(i,n)
    cin >> arr[i];
    binSearch();

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
