#include<bits/stdc++.h>
using namespace std;
void occurence( int a[],int n,int k,int *first,int *second)
{
    if(n==0) 
    {
        if(k==a[n] && ((*first=-1) && (*second=-1)))  *first=n;
        if(a[n]==k &&(*(first)!=-1)) *second=n;
        return;
    }
    if(k==a[n] && (*first=-1)) *first=n;
    if(a[n]==k &&(*(first)!=-1) ) *second=n;
    return occurence(a,n-1,k,&(*first),&(*second));
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    int first=-1,second=-1;
    occurence(a,n-1,k,&first,&second);
    cout<<first<<" "<<second;
}