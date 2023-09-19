#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, max, min, count=0;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    max= min = arr[0];
    for(i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            count++;
            max = arr[i];
        }
        if(arr[i]<min)
        {
            count++;
            min = arr[i];
        }
    }
    cout<<count;
}