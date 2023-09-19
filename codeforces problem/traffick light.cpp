#include<bits/stdc++.h>
using namespace std;
int bins(vector<int> &a,int s,int e,int k)
{
    int m=s+(e-s)/2;
    if(e-s<=1)
    {
        if(a[s]>=k)
        return s;
        else if(a[e]>=k)
        return e;
        else 
        return a.size()-1;
    }
    else if(a[m]<k)
    return bins(a,m+1,e,k);
    else 
    return bins(a,s,m,k);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    char c;
    cin>>n>>c;
    string a;
    cin>>a;
    string b=a+a;
    int d=INT_MIN;
    vector<int> s;
    for(int i=0;i<b.size();i++){
    if(b[i]=='g') s.push_back(i);}
    for(int i=0;i<b.size();i++)
    {
        int e;
        if(b[i]==c)
        {
            e=bins(s,0,s.size()-1,i);
            d=max(d,abs(s[e]-i));
        }
    }
    cout<<d<<endl;
    }
}