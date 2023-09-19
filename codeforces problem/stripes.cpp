#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<8;i++)
        {
            int c=0,b=0;
            for(int j=0;j<8;j++)
            {
                if(a[i][j]=='R')
                c++;
                if(a[j][i]=='B')
                b++;
            }
            if(c==8)
            {
            cout<<"R"<<endl;
            break;
            }
            if(b==8)
            {
            cout<<"B"<<endl;
            break;
            }

        }
    }
}