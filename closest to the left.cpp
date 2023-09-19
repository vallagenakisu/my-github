#include<bits/stdc++.h>
using namespace std;
int binlef(int a[],int n,int k)
{
    int s=0,e=n-1,x;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]==k)
        return mid+1;
        else if(a[mid]>k)
        e=mid-1;
        else if(a[mid]<k)
        s=mid+1;
        x=mid;
    }
    if(x>0)
    return x+1;
    else 
    return 0;

}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b[k];
    for(int i=0;i<k;i++)
    cin>>b[i];
    for(int i=0;i<k;i++)
    {
        cout<<binlef(a,n,b[i])<<endl;
    }
}