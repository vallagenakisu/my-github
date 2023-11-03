#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int n;
const int N = 1e5;
int sum;
int a[N];
bool coin(int pos , int s )
{
   
    if(pos == n ) 
    return false;

    if(s == sum )
    return true;
    
    
    // take 
    bool take= coin(pos+1,s+a[pos]);
    //cout << s << endl;
    //dont take
    bool dont_take=coin(pos+1,s);
    //cout << s << endl;
    cout << take << " " << dont_take<<endl;
    return take | dont_take;
}
void sol()
{
    cin >> n;
    f(i,n)
    cin >> a[i];
    cin >> sum;
    // cout << sum<<endl;
    // f(i,n) cout << a[i] <<" ";
    cout<< coin(0,0);
    
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
