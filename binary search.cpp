    #include<bits/stdc++.h>
    using namespace std;
    int bins(int a[],int k,int s,int e)
    {
        if(s<=e)
        {
            int mid=s+(e-s)/2;
            if(a[mid]==k)
            return 1;
            else if(a[mid]>k)
            {
                return bins(a,k,s,mid-1);
            }
            else
            {
                return bins(a,k,mid+1,e);
            }
        }
        return -1;
    }
    int main()
    {
        int n;
        int k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int b[k];
        for(int i=0;i<k;i++)
        cin>>b[i];
        for(int i=0;i<k;i++)
        {
            if(bins(a,b[i],0,n)==1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
    }