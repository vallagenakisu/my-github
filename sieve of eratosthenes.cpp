#include<bits/stdc++.h>
using namespace std;
vector<int> v;
bool a[20000010]={0};
void sieve()
{
    for(int i=2;i<20000010;i++)
    {
        if(a[i]==0)
        {
            for(int j=2*i;j<20000010;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    for(int k=2;k<20000010;k++)
    {
        if(a[k]==0 && a[k+2]==0)
        {
        v.push_back(k);
        }
    }

}
int main()
{
    sieve();
    int n;
    while(scanf("%d",&n)==1)
    cout<<"("<<v[n-1]<<", "<<v[n-1]+2<<")"<<endl;
}