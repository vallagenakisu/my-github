#include<bits/stdc++.h>
using namespace std;
int lowe_bo(vector<int> &v,int s,int e,int k)
{
    int m=s+(e-s)/2;
    if(e-s<=1)
    {
        if(v[s]>=k)
        return s+1;
        else if(v[e]>=k)
        return e+1;
        else 
        return e+2;
    }
    if(v[m]<k)
    return lowe_bo(v,m+1,e,k);
    else 
    return lowe_bo(v,s,m,k);
    return 0;
}
int main()
{
   int n,k;
   cin>>n>>k;
   int b[k];
   vector<int> v(n);
   for(int i=0;i<n;i++)
    cin>>v[i];
for(int i=0;i<k;i++)
cin>>b[i];
for(int i=0;i<k;i++)
{
cout<<lowe_bo(v,0,v.size()-1,b[i])<<endl;
}
}