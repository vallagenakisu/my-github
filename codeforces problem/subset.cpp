#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    vector< vector <int> > subset;
    for(int i=0;i<n;i++)
    {
        int f;
        cin>>f;
        a.push_back(f);
    }
    for(int i=0;i<8;i++)
    {
        vector<int> s;
        for(int j=0;j<n;j++)
        {
            if((1<<j) & i )  
            s.push_back(a[j]);
        }
        subset.push_back(s);
    }
    for(auto i: subset)
    {
        for(int j: i){
        cout<<j<<" ";
        }
        cout<<endl;
    }
    
}