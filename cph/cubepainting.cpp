#include<bits/stdc++.h>
using namespace std;
int oneto6(string a)
{
    if(a[1]==a[1+6] && a[6]==a[6+6])
    return 1;
    else if(a[1]==a[6+6] && a[6]==a[1+6])
    return 1;
    else if(a[1]==a[2+6] && a[6]==a[5+6])
    return 1;
    else if(a[1]==a[5+6] && a[6]==a[2+6])
    return 1;
    else if(a[1]==a[3+6] && a[6]==a[4+6])
    return 1;
    else if(a[1]==a[4+6] && a[6]==a[3+6])
    return 1;
    else 
    return 0;

}
int twoto5(string a)
{
    
}
int main()
{
    string a;
    cin>>a;

}