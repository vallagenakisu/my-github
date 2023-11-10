#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
#define pii pair<int, int>
const int N = 1e2;
int grid[N][N];
int m, n;
int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
vector<vector<int>> dist(N, vector<int>(N, 1e5));
void sol()
{
    cin >> m >> n;
    for(int i =0 ; i < m ; i++)
    {
        for(int j =0; j<n ;j++)
        cin >> grid[i][j];
    }
    
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
