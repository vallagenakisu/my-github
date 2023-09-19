#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void setzero(vector<vector<int>> &matrix, int x,int y)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            if(i==x) matrix[i][j]=0;
            if(j==y) matrix[i][j]=0;
        }
    }
}
void sol()
{
    vector<vector<int> > matrix{ {1,1,1},{1,0,1},{1,1,1} };
    vector<pair<int,int>> pair;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            if(matrix[i][j]==0)
            {
                pair.push_back(make_pair(i,j));
            }
        }
    }
    for(auto x : pair)
    {
        setzero(matrix, x.first,x.second);
    }
   // return matrix;


}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    sol();
  }
}
