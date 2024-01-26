#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int count = 0 ;
    f(i,n-1)
    {
        if(a[i] == a[i+1])
        count++;
    }
    cout << count << endl;

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
  
}
