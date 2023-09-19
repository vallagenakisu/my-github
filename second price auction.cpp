#include<bits/stdc++.h>
using namespace std;
bool sol()
{
    int k;
    cin>>k;
    int t=sqrt( (k-1)*2);
    if( ((t*(t+1))/2)+1==k ) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        cout<<sol()<<endl;
    }
}