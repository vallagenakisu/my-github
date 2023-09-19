#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
    int h,m,s;
    cout<<"ENTER HOUR : MINUTE : SECOND";
    cin>>h>>m>>s;
    system("CLS");
    if(h>24 and m>60 and s>60)
    {
        cout<<"ERROR Enter Again";
        system("CLS");
        cin>>h>>m>>s;
    }
    while(true)
    {
        system("CLS"); 
        cout<<h<<" : "<<m<<" : "<<s<<" : ";
        Sleep(1000);
        s++;
        if(s>60)
        {
            s=0;
            m++;
        }
        if(m>60)
        {
            m=0;
            h++;
        }
        if(h>24)
        {
            h=0;
        }
    }
}