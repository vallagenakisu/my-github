#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b;
    cin>>b;
    int len = b.size();
    string my = "hello";
    int cur = 0;
    for(int i = 0 ; i < len ; i++){
        if(cur < 5 && my[cur] == b[i])cur++;
    }
    if(cur == 5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}