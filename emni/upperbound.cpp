#include<bits/stdc++.h>
using namespace std;
int upbound(vector<int> &a,int s,int e,int k)
{
    int m=s+(e-s)/2;
    if(e-s<=1)
    {
        if(a[s]>k)
        return s;
        else if(a[e]>k)
        return e;
        else if(k>a[e])
        return e;
    }
    if(a[m]<=k)
    return upbound(a,m+1,e,k);
    else
    return upbound(a,s,m,k);
    return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int k;
    cin>>k;
    cout<<upbound(v,0,v.size()-1,k);

}