#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> b;
    string a ;
    cin>>a;
    // ((() ()))
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='(') b.push(a[i]);
        else if(a[i]==')') 
        {
            if(b.empty())
            {
                cout<<"NOT BALANCED";
                return 0;
            }
            b.pop();
        }
    }
    if( b.empty())
    {
        cout<<"BALANCED";
        //cout<<b.size();
    }
    else{ cout<<"NOT BALANCED"<<endl;
    //cout<<b.size();
    }
}