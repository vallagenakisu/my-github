#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string y;
        string x;
        cin>>y;
        cin>>x;
        int nx,ny;
        ny=y.size();
        nx=x.size();
        if(y[ny-1]=='L' && x[nx-1]=='S')
        {
            cout<<">"<<endl;
        }
        else if(y[ny-1]=='L' && x[nx-1]=='M')
        {
            cout<<">"<<endl;
        }
        else if(y[ny-1]=='M' && x[nx-1]=='L')
        {
            cout<<"<"<<endl;
        }
        else if(y[ny-1]=='M' && x[nx-1]=='S')
        {
            cout<<">"<<endl;
        }
        else if(y[ny-1]=='S' && x[nx-1]=='L')
        {
            cout<<"<"<<endl;
        }
        else if(y[ny-1]=='S' && x[nx-1]=='M')
        {
            cout<<"<"<<endl;
        }
        else if(y[ny-1]=='S' && x[nx-1]=='S')
        {
            if(ny-1>nx-1)
            cout<<"<"<<endl;
            else if(ny-1<nx-1)
            cout<<">"<<endl;
            else if(ny-1==nx-1)
            cout<<"="<<endl;
        }
        else if(y[ny-1]=='M' && x[nx-1]=='M')
        {
            cout<<"="<<endl;
        }
        else if(y[ny-1]='L' && x[nx-1]=='L')
        {
            if(ny>nx)
            cout<<">"<<endl;
            else if(ny<nx)
            cout<<"<"<<endl;
            else if(ny==nx)
            cout<<"="<<endl;
        } 

    }
}