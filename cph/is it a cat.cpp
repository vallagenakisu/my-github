        #include<bits/stdc++.h>
        using namespace std;
       bool sotr(vector<int> &b)
        {
            for(int i=0;i<b.size();i++)
            {
                if(b[i]>b[i+1])
                return false;
            }
            return true;
        }
        void lower(string *a)
        {
            for(int i=0;i<(*a).size();i++)
            {
                if((*a)[i]<=97)
                (*a)[i]=(*a)[i]+32;
            }
        }
        void merge(vector<int> &a,vector<int> &b)
        {
            for(int i=0;i<b.size();i++)
            {
                a.push_back(b[i]);
            }
        }
        int main()
        {
            int t;
            cin>>t;
            while(t--)
            {
                int n;
                cin>>n;
                string a;
                cin>>a;
                lower(&a);
                int c=0;
            vector<int> m,e,o,w;
            for(int i=0;i<a.size();i++)
            {
                if(a[i]=='m')
                m.push_back(i);
                else if(a[i]=='e')
                e.push_back(i);
                else if(a[i]=='o')
                o.push_back(i);
                else if(a[i]=='w')
                w.push_back(i);
                else 
                c=1;
            }
            if(m.size() && e.size() && o.size() && w.size())
            ;
            else 
            c=1;
            vector<int> sol;
            merge(sol,m);
            merge(sol,e);
            merge(sol,o);
            merge(sol,w);
            int s=is_sorted(sol.begin(),sol.end());
            if(c==0)
            {
                if(s)
                {
                    cout<<"YES"<<endl;
                }
                else 
                cout<<"NO"<<endl;
            }
            else 
            cout<<"NO"<<endl;
        }
    }