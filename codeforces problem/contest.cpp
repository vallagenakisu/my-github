#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            if(a.size()==1)
            {
                if(a[i]=='Y')
                {
                    c++;
                    break;
                }
            }
            else if(a.size()>1)
            {
            if(a[i]=='Y')      
            {
               if(a[i+1]=='e')
               c++;
               else
               c--;
            }
            if(a[i]=='e')
            {
                if(a[i+1]=='s')
                c++;
                else
                c--;
            }
            if(a[i]=='s')
            {
                if(a[i+1]=='Y')
                c++;
                else 
                c--;
            }
            }
        }
        cout<<c<<endl;
    }
}