#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n-1];
    vector<int> b(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        b[i]=i+1+a[i];
    }
    sort(b.begin(),b.end());
    //for(int i=0;i<n-1;i++)
    //cout<<b[i]<<" ";
    if(binary_search(b.begin(),b.end(),t))
    cout<<"YES";
    else 
    cout<<"NO";
}