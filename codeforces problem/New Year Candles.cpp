#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int recursive1(int a,int b)
{
    if(a<b)
    return 1;
    int s=0,c=0;
    c=c+a%b;
    s=s+recursive1(a/b,b);

}
int main()
{
    int a,b;
    cin>>a>>b;
    recursive1(a,b);

}