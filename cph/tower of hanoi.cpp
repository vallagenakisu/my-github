#include<bits/stdc++.h>
using namespace std;
void toh(int n,char a,char b, char c)
{
    if(n==1){
    cout<<"MOVE disc "<<n<<" from "<<a<<" to "<<c<<endl;
    return;
    }
    toh(n-1,a,c,b);
    cout<<"MOVE disc "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1,b,a,c);  
    
}
int main()
{
    int n;
    cin>>n;
    char a='A',b='B',c='C';
    toh(n,a,b,c);
}