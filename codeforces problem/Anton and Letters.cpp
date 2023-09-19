#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    gets(a);
    int b[28];
    for(int i=0;i<28;i++)
    b[i]=0;
    for(int i=1;i<=strlen(a);i=i+3)
    {
        b[a[i]-96]=1;
    }
    int c=0;
    for(int i=0;i<28;i++)
    {
        if(b[i]==1)
        c++;
    }
    cout<<c;
}