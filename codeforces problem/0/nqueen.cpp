#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int n;
bool a[N][N];

bool isSafe(int x , int y)
{
    for(int row = 0 ; row<x ; row++)
    {
        if(a[x][row] == 1)
        return false;
    }
    int row = x ;
    int col = y ;
    while( row >=0 && col >=0)
    {
        if(a[row][col]==1)
        return false;
        row--;
        col--;
    }
    while( row <n && col >=0)
    {
        if(a[row][col]==1)
        return false;
        row++;
        col--;
    }
    while( row >=0 && col < n)
    {
        if(a[row][col]==1)
        return false;
        row--;
        col++;
    }
    while( row <n && col < n)
    {
        if(a[row][col]==1)
        return false;
        row++;
        col++;
    }
    return true;

}
bool nQueen(int x)
{
    if(x>=n)
    return true;

    for(int row = 0 ; row<n ; row++)
    {
        if(isSafe(row,x))
        {
            a[row][x] = 1;

            if(nQueen(x+1))
            return true;


            a[row][x] = 0;
        }
    }
    return false;
}

int main()
{
    cin >> n;
    nQueen(0);
    for(int i =0 ; i <n;i++)
    {
        for(int j =0 ; j < n ; j++)
        cout << a[i][j] << " ";
        cout << endl;
    }
}