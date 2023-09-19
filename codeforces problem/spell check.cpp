#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[6]="Timur";
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        char b[n];
        gets(b);
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                c++;
            }
        }
       cout<<c<<endl;
    }
    
}