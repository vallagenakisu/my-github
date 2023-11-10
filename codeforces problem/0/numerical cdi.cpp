#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    f(i,n)
    {
        double x,y;
        cin >> x >> y;
       // cout <<x << y << endl;
        cout << log(x) << " " << log(y) <<" " << log(x)*log(y) <<" "<<log(x)*log(x)<<endl;
    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
