#include<bits/stdc++.h>
using namespace std;
bool beautiful(string a)
{
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==a[i+1]) 
        return false;
    }
    return true;
}
void shift(string *a ,string *b)
{
    *a=*a+*b[(*b).size()-1];
    (*b).pop_back();
    if(beautiful(*a))
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string c,d;
        cin>>c>>d;
        if(beautiful(c) && beautiful(d))
        cout<<"YES"<<endl;
        else
        {
            if(beautiful(c))
            {
                while(!(beautiful(d)) && c.size()>2)
                shift(&d,&c);

                if(!(beautiful(d)))
                cout<<"NO"<<endl;
            }
            else if(beautiful(d))
            {
                while(!(beautiful(c)) && d.size()>2)
                shift(&c,&d);
                if(!(beautiful(c)))
                cout<<"NO"<<endl;
            }
        }


        
    } 
}