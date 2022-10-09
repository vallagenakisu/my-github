#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    m=n & n-1;
    if(m==0)
    cout<<"YES";
    else
    cout<<"NO";
}