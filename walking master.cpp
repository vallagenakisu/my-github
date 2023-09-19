#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d) {cout<< -1<<endl;return;}
    int h=d-b;
    if(c==a && b==d)
    {
        cout<< 0<<endl; return;
    }
    if(c>=a)
    {
        int x=a+h;
        if (c>x) 
        {
            cout<<-1<<endl;
            return;
        }
        cout<<abs(x-c)+(d-b)<<endl;
    }
    else if(c<a)
    {
        int x=a-c;
        cout<<x+ (2*(d-b))<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}