#include <bits/stdc++.h>
using namespace std;
const int N = 10;
int n;
bool a[N][N];
int count1;
bool isSafe(int row, int col)
{
    int i, j;
 
    for (i = 0; i < col; i++)
        if (a[row][i])
            return false;
 
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (a[i][j])
            return false;
 
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (a[i][j])
            return false;
 
    return true;
}
void nQueen(int col)
{
    if (col == n)
    {
        count1++;
        return ;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col))
        {
            a[row][col] = 1;
            nQueen(col + 1);
            a[row][col] = 0;
        }
    }
}

int main()
{
    cin >> n;
    nQueen(0);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }
    cout<< count1 <<" ";
}