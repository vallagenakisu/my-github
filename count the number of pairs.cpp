#include<bits/stdc++.h>
using namespace std;
#define f first 
#define pb push_back
#define s second 
#define all(x) x.begin(),x.end()
int s;
int burl(int a[],int b[])
{
    for(int i=0;i<27;i++)
    {
        s=s+min(a[i],b[i]);
        if(a[i]<b[i])
        {
            b[i]=b[i]-a[i];
            a[i]=0;
        }
        else if(a[i]>b[i])
        {
            a[i]=a[i]-b[i];
            b[i]=0;
        }
        else 
        {a[i]=0;b[i]=0;}
    }
    return s;
}
int kth(int a[],int b[])
{
    for(int i=0;i<27;i++)
    {
        if ( (a[i]%2==0 && a[i]!=0) || (b[i]%2==0 && b[i]!=0) ) 
        {s++;}
        
    }
    return s;
}
void sol()
{
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    int c[27]={0},sm[27]={0};
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        c[a[i]-65]++;
        else if(a[i]>='a' && a[i]<='z')
        sm[a[i]-97]++;
    }
   burl(c,sm);
   /*for(int i=0;i<27;i++)
    {
        cout<<"( "<<c[i]<<","<<sm[i]<<" )"<<endl;
    }*/
    cout<<kth(c,sm)<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}