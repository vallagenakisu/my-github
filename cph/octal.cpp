    #include<bits/stdc++.h>
    using namespace std;
     
    #ifdef ANI
    #include "D:/DUSTBIN/local_inc.h"
    #else
    #define dbg(...) 0
    #endif
     
    void solve() {
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	string p="meow",q="MEOW";
    	int req=0;
    	for(int i=0;i<n;) {
    		int j=i;
    		if(s[i]!=p[req] and s[i]!=q[req]) {
    			cout<<"NO\n"; return;
    		}
    		while(j<n && (s[j]==p[req] or s[j]==q[req]))
    			j++;
    		i=j;
    		req++;
    	}
    	cout<<(req==4?"YES\n":"NO\n");
    }
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--) {
    		solve();
    	}	
    }