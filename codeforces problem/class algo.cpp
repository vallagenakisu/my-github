#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N= 1e2;
int a[N];
int n;
int sum;
int dp[N][N];
const int inf=1e3;
vector< vector<int> > positions;
vector<int> vec;
int coin(int pos , int s )
{
    cout << s << " ";
    if( pos == n ) return inf;

    if(s+a[pos] > sum) return inf;

    if(s== sum ) 
    return 1;
    

    if(dp[pos][s] != -1) return dp[pos][s];

    int take= 1 + coin(pos+1,s+a[pos]);
    cout <<endl<<"comes here"<<endl;

    //cout << s << " ";
    int dont_take=coin(pos+1,s);

    return dp[pos][s]=min(take,dont_take);
}
void sol()
{
    cin >> n;
    f(i,n) cin >> a[i];
    cin >> sum;
    f(i,N)
    {
        f(j,N)
        dp[i][j] = -1;
    }
    cout << coin(0,0) << endl;
    // f(i,7)
    // {
    //     f(j,7)
    //     cout << dp[i][j]<<" ";
    //     cout << endl;
    // }

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
