#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    k=240-k;
    vector<int> pf;
    int s=5;
    pf.push_back(5);
    for(int i=2;i<n+1;i++)
    {
        s=s+i*5;
        pf.push_back(s);
    }
  /*  for(auto i:pf)
    {
        cout<<i<<" ";
    }*/
    vector<int> ::  iterator a1;
    a1=upper_bound(pf.begin(),pf.end(),k);
    cout<<(a1-pf.begin()); //*/
}