#include<bits/stdc++.h>
using namespace std;
const int M=1e5+100;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1,b=1,s=0;
        for(int i=1;i<=n;i++)
        {
            if(s<=4)
            {
                b++;
                s++;
            }
            else if(s<8)
            {
                a++;
                s++;
            }
            else 
            {
                s=0;
                a++;
                s++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}