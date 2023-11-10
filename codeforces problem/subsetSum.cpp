#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
vector<int> arr;
int n;
vector<int> ds;
void subset(int index,int sum,int n)
{
    if(index == n)
    {
        cout << sum << endl;
        return;
    }
    //taking
    subset(index+1,sum+arr[index],n);
    //not taking
    subset(index+1,sum,n);
}

void sol()
{
    int n;
    cin >> n;
    f(i,n)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    subset(0,0,n);
    cout << ds.size();
    for(auto x : ds)
    {
        cout << x << " ";
    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();

}
