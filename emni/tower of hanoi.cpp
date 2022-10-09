#include<bits/stdc++.h>
using namespace std;
void toh(int n,char s,char h, char d)
{
    if(n==1)
    {
    cout<<"Move Disk "<<n<<" From "<<s<<" TO "<<d<<endl;
    return;
    }
    toh(n-1,s,d,h);
    cout<<"Move Disk "<<n<<" From "<<s<<" To "<<d<<endl;
    toh(n-1,h,s,d);
    cout<<"Move Disk "<<n<<" From "<<s<<" To "<<d<<endl;

}
int main()
{
    int n;
    char a='A',b='B',c='C';
    cin>>n;
    toh(n,a,b,c);
}