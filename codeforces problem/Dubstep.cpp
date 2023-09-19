#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    int c=0;
   for(int i=0;i<a.size();)
   {
    if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
    i=i+3;
    else 
    {
        b.push_back(a[i]);
        i++;
    }
   }
   cout<<b;
}