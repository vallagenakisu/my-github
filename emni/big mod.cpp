#include<bits/stdc++.h>
using namespace std;
int big(int b,int p,int m)
{
    if(p==0)
    return 1;
    else if(p%2==0)
    {
    int p1=(big(b,p/2,m))%m;
    return (p1*p1)%m;
    }
    else
    {
    int p1=b%m;
    int p2=(big(b,p-1,m))%m;
    return (p1*p2)%m;
    }


}
int main()
{
    long long  int b,p;
    int m;
    while((scanf("%lld %lld %d",&b,&p,&m))!=EOF)
    {
    cout<<big(b,p,m)<<endl;
    }

}