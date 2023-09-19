    #include<bits/stdc++.h>
    using namespace std;
    int sum(int n)
    {
        int s;
        s=((float)n/2)*(2*5+(n-1)*5);
        return s;
    }
    int main()
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        a[i]=i+1;
        int s=0,e=n-1;
        if(sum(n)+k<=240)
        cout<<n;
        else
        {
        while(e!=0)
        {
           int mid=s+e/2;
           if(sum(a[mid])+k<240)
           {
            s=mid;
            if(e-s==1)
            {
                if(sum(a[e])+k<240)
                {e=0;
                s=s+1;
                }
                else if(sum(a[e])+k>240)
                {
                    e=0;
                }
     
            }
           }
           else if(sum(a[mid]+k)>240)
           {
            e=mid;
            if(e-s==1)
            {
                if(sum(a[e])+k<240)
                {
                e=0;
                s++;
                }
                else if(sum(a[e])+k>240)
                {
                    e=0;
                }
            }
           }
           else if(sum(a[mid]+k==240))
           {
            e=0;
            s=mid;
           }
        }
        cout<<s+1;
        }   

    }