#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n ;
    cin >> n;
    int last,mul=1,cx=0;
    vector<int> ans;
    while(n)
    {
        last = n % 10;
        if(last)
        {
            ans.push_back(last*mul);
            cx++;
        }
        mul = mul * 10;
        n = n / 10;
        
    }
    cout << cx << endl;
    for(auto x : ans)
    cout << x << " ";
    cout << endl;

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
