#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    stack<char> para ;
    f( i , a.size())
    {
        if( a[i] == '(' )
        {
            para.push(a[i]);
        }
        else if(!para.empty())
        para.pop();
    }
    if(para.empty())
    {
        cout << 0 << endl;
    }
    else 
    {
        cout << para.size() << endl;
    }
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
