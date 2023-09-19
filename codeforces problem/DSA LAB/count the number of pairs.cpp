#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    int sm[27]={0};
    int cap[27]={0};
    int kth[27]={0};
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' and a[i]<='Z')
        cap[a[i]-64]++;
        else 
        sm[a[i]-96]++;
    }
   /* for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' and a[i]<='Z')
        cout<<a[i];
    }
    cout<<endl;*/
    int count=0;
    for(int i=0;i<27;i++)
    {
        count=count+min(sm[i],cap[i]);
        if(sm[i]>cap[i])
        kth[i]=sm[i]-cap[i];
        else 
        kth[i]=cap[i]-sm[i];
    }
    //ABC
    //bbccc
    //cout<<count<<endl;
    /*for(int i=0;i<27;i++)
    cout<<kth[i]<<" ";*/
    while(k--)
    {
        for(int i=0;i<27;i++)
           {
                if(kth[i]>=2)
                {
                    count++;
                    kth[i]=kth[i]-2;
                    break;
                }
           }
    }

    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}