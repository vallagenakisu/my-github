#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
#define pii pair<int, int>
const int N = 1e2;
int grid[N][N];
int m, n;
int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
vector<vector<int>> dist(N, vector<int>(N, 1e5));
int shortest(pii s, pii d)
{
    dist[s.first][s.second] = 0;
    queue<pair<int, pii>> q;
    q.push({0, s});
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int r = it.second.first;
        int c = it.second.second;
        int dis = it.first;
        for (int i = 0; i < 4; i++)
        {
            int newr = r + dr[i];
            int newc = c + dc[i];
            if ( grid[newr][newc] != 0 and (newr >= 0 and newr < m) and (newc >= 0 and newc < n))
            {
                if (dist[newr][newc] > dist[r][c] + 1)
                {
                    dist[newr][newc] = dist[r][c] + 1;
                    q.push({dis + 1, {newr, newc}});
                    if (newr == d.first and newc == d.second)
                        return dist[r][c] + 1;
                }
            }
        }
    }
    return 0;
}
void sol()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    pii src, dest;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    src = {a, b};
    dest = {c, d};
    cout << shortest(src, dest);
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
