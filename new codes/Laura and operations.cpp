#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
bool af( int a , int b , int c )
{
    while( b != 0 and c != 0)
    {
        a++;
        b--;
        c--;
    }
    if(b==0 and c == 0 )
    return true;
    return false;
}
bool bf( int a , int b , int c )
{
    while( a != 0 and c != 0)
    {
        b++;
        a--;
        c--;
    }
    if(a ==0 and c == 0 )
    return true;
    return false;
}
bool cf( int a , int b , int c )
{
    while( a != 0 and b != 0 )
    {
        c++;
        b--;
        a--;
    }
    if(a ==0 and b == 0 )
    return true;
    return false;
}
void sol()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    int ansa = 0 , ansb = 0 , ansc = 0 ;
    ansa = af(a,b,c);
    ansb= bf(a,b,c);
    ansc= cf(a,b,c);
    cout << ansa <<" " << ansb <<" " << ansc << endl;

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
