#include<bits/stdc++.h>
using namespace std;
bool lucky(int n)
{
    int s,c=0,i=0;
    for(int j=n;j!=0;j=j/10)
    {
        i++;
    }
    while(n!=0)
    {
        s=n%10;
        if(s==4 or s==7)
        {
            c++;
        }
        n=n/10;
    }
    if(i==c)
    return true;
    else 
    return false;
    

}
int main()
{
    int n,c=0;
    cin>>n;
    if(n==1)
    cout<<"NO";
    if(lucky(n))
    {
        cout<<"YES";
    }
    else
    {
        int x=n-1;
        while(x>1)
        {
            if(lucky(x) && n%x==0)
            {
                cout<<"YES";
                break;
            }
            else
            x--;
            c++;
        }
    }
   if(c==n-2)
   cout<<"NO";

}