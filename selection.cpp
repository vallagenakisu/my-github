#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int m,min_i;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        min_i=i;m=a[i];
        int j=i;
        while(j<n)
        {
            if(m>a[j])
            {
                m=a[j];
                min_i=j;
            }
            j++;
        }
        swap(a[min_i],a[i]);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}