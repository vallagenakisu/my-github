#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=0;
    int m;
    int i;
    while(a[0]>0)
    {
        m=*min_element(a+1,a+n);
        i=find(a+1,a+n,m)-a;
        a[0]=a[0]-1;
        swap(a[0],a[i-1]);
        c++;
    }
    cout<<c;
}