#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=2,y=0;
    int z=(y++) ? 2: y==1 && x;
    cout<<z;
}