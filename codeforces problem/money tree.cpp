#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int n , k;
const int N = 2e5+10;
int fruit[N] , height[N];
void greedy()
{
    int sum =0;
    int l = 0 ,r = 0;
    int length = 0;
    while(l<n and r < n )
    {
        if(r==n-1)
        {
    
            if(sum = sum + fruit[r] <=k)
            {
                length = max(length , r - l + 1);
            }
            break;
        }
        else if(height[r] % height[r+1] == 0 and sum + fruit[r] <= k )
        {
            sum = sum + fruit[r];
            r++;
        }
        else 
        {
            length = max( length , r - l+1  );
            r++;          
            l = r;
            sum = 0;
        }
    }
    cout << length << endl;
}
void sol()
{
    cin >> n >> k;
    f(i,n) cin >> fruit[i];
    f(i,n) cin >> height[i];
    greedy();

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
