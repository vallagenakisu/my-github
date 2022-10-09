#include<bits/stdc++.h>
using namespace std;
int resar(int ar[],int st,int e)
{
    int s=0;
    for(int i=st;i<e;i++)
    {
        s=s+ar[i];
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    int s=0,c=0;
    for(int i=0;i<n;i++)
    {
        s=s+ar[i];
        c++;
        if(s>resar(ar,i+1,n))
        break;
    }
    cout<<c;

}