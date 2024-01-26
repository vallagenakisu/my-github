#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
void sol()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int danik = 0 , anton = 0;
    f(i,n)
    {
        if(a[i] == 'D')
        danik++;
        else 
        anton++;
    }
    if(anton > danik)
    cout <<"Anton" << endl;
    else if(danik > anton)
    cout <<"Danik" << endl;
    else 
    cout <<"Friendship" << endl;
}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  sol();
}
