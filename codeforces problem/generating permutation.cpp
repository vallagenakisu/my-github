#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
const int N = 100;
int taken[N];
int position[N];
int n;
vector<vector<int>> ans;
vector<int> ds;
void permutation(int index)
{
    if(index == n)
    {
        ans.push_back(ds);
        return;
    }
    for(int i =1 ; i <= n ; i++)
    {
        if(taken[i] == false)
        {
            taken[i] = true;
            position[index] =i;
            ds.push_back(position[index]);
            permutation(index+1);
            ds.pop_back();
            taken[i] = false;
        }
    }
}

void sol()
{
    cin >> n;
    permutation(0);
    for(auto x : ans)
    {
        for(auto y : x)
        cout << y << " ";
        cout << endl;
    }

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
