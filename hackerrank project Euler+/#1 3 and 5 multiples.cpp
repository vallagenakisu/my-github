#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int a,b,c;
        a=n/3;b=n/5;c=n/15;
        if(n%3==0)
        a--;
        if(n%5==0)
        b--;
        if(n%15==0)
        c--;
        long long  int s1,s2,s3;
        s1=((float)a/2)*(2*3+(a-1)*3);
        s2=((float)b/2)*(2*5+(b-1)*5);
        s3=((float)c/2)*(2*15+(c-1)*15);
        cout<<s1+s2-s3<<endl;
    }
}