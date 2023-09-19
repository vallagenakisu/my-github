#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ksum;
    cin>>n>>ksum;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int s=0,e=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[e];
        e++;
        if(sum>=ksum)
        {
        e--;
        break;
        }
    }
    if(sum==ksum)
    cout<<s+1<<" "<<e+1;
    else{ 
    for(int i=0;i<n;i++)
    {
        sum=sum-a[s];
        s++;
        if(sum<=ksum)
        break;
    }
    }
    if(sum==ksum)
    cout<<s+1<<" "<<e+1;
    else 
    cout<<-1;



}