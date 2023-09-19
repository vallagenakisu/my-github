#include<bits/stdc++.h>
using namespace std;
void sub(int  a[], int  n)
{
    int s=0,e=0;
    while(e<n)
    {
        for(int i=s;i<=e;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        e++;
    }
    while(s<e)
    {
        for(int i=0; )
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sub(a,n);
}