#include<bits/stdc++.h>
using namespace std;
void swap1(int *x,int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
void select_minmax(int a[],int *m,int *l,int *max_i, int *min_i,int *min1,int *max1)
{
    for(int i=*m;i<=*l;i++)
    {
        if(a[i]>*max1 )
        {
            *max1=a[i];
            *max_i=i;
        }
        else if(a[i] < *min1 )
        {
            *min1=a[i];
            *min_i=i;
        }
    }
}
void min_max(int a[],int n)
{
    int m=0,l=n-1;
    while(m<l)
    {
        int max_i=m,min_i=m;
        int min1=a[m],max1=0;
        select_minmax( a,&m,&l,&max_i,&min_i,&min1,&max1);
        swap(a[m],a[min_i]);
        if(a[min_i]==max1)
            swap( a[l], a[min_i]);
        else
        swap(a[l],a[max_i]);
        m++;l--;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    min_max(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}