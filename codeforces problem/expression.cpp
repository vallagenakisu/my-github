#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    int a,b,c;
    cin>>a>>b>>c;
    s1=a+b*c;
    s2=a*(b+c);
    s3=a*b*c;
    s4=(a+b)*c;
    int s5=a+b+c;
    int m1,m2,m3;
    if(s1>s2)
    m1=s1;
    else
    m1=s2;
    if(s3>s4)
    m2=s3;
    else
    m2=s4;
    if(m1>m2)
    m3=m1;
    else
    m3=m2;
    if(s5>m3)
    cout<<s5;
    else
    cout<<m3;
    

    




}