#include<bits/stdc++.h>
using namespace std;

int add( int a,int b)
{
    return a+b;
}
int (*fun)(int ,int )
{
    return add;
}
int main() 
{
    int(*ptr)(int ,int )=fun();
    ptr(7,8);
    return 0;
}