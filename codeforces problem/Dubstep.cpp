#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    string a;
    cin >> a;
    f(i,a.size())
    {
        if(a[i]=='W' and a[i+1]=='U' and a[i+2]=='B')
        {
            i = i+2;
        }
        else 
        {
            while(!(a[i]=='W' and a[i+1]=='U' and a[i+2]=='B'))
            {
                cout << a[i];
                i++;
                if(i>=a.size())
                return;

            }
            cout <<" ";
            i--;
        }
    }
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();

}
