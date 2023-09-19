#include <bits/stdc++.h>
using namespace std;
const int N = 300;
const int INF = INT_MAX;
int next_node[N][N]; // To keep track of the next node on the shortest path

int main()
{
    int v, e;
    cin >> v >> e;
    int dist[N][N];
    //initialize graph with inf and next with -1
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                dist[i][j] = 0;
            else
                dist[i][j] = INF;
            next_node[i][j] = -1;
        }
    }

    for (int i = 1; i <= e; i++)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        dist[a][b] = wt;
        next_node[a][b] = b;
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            for (int k = 1; k <= v; k++)
            {
                if (dist[k][i] + dist[i][j] < dist[k][j])
                {
                    dist[k][j] = dist[k][i] + dist[i][j];
                    next_node[k][j] = next_node[k][i]; // Update next node on the path
                }
            }
        }
    }

    // Check for negative cycle and path print 
    for (int i = 1; i <= v; i++)
    {
        if (dist[i][i] < 0)
        {
            int start = i;
            cout << "Negative Cycle Path: ";
            while (true)
            {
                cout << start << " ";
                start = next_node[start][i];
                if (start == -1 || start == i)
                    break;
            }
            cout << start << endl; // Print the cycle's starting node again to close the loop
            return 0;
        }
    }

    cout << "No negative cycle found.\n";
    return 0;
}