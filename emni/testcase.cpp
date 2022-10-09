#include<bits/stdc++.h>
using namespace std;
bool ef(int n)
{
    int m;
    m=n & n-1;
    if(m==0)
    return 1;
    else
    return 0;
}
int main()
{
   int n,c=0;
   cin>>n;
   for(int i=1;i<=n;i++) 
   {
    if(ef(i)){
    cout<<i<<endl;
    c++;
    }
   }
   cout<<c;
}
