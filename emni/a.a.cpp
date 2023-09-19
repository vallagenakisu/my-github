#include<bits/stdc++.h>
using namespace std;
int bins(vector<int> &a,int s,int e,int k)
{
    int mid=s+(e-s)/2;
    if(s>e)
    return mid;
    if(a[mid]<k)
    return bins(a,mid+1,e,k);
    else 
    return bins(a,s,mid-1,k);    
}
int main()
{
    vector<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(6);
    s.push_back(7);
    for(int i=0;i<3;i++)
    {
        int r;
        cin>>r;
        cout<<bins(s,0,s.size()-1,r)<<endl;
    }
}