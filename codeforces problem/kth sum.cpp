#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int n  ; 
long long k;
const int N =2e5;
vector<int> a(N),b(N);
bool count(int x)
{
    long long int cnt=0;
    for(int i=0 ; i < n ; i++)
    {
        cnt = cnt +( upper_bound( b.begin(),b.begin()+n, x-a[i]) - b.begin() );
    }
    return k<= cnt;
}
// 2 4 4 6 8 
// 1 3 5  7 9 
void binSearch()
{
    int l=0 ,r = 2e9,ans=0;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(count(mid))
        {
            ans = mid;
            r = mid -1;
        }
        else 
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}
void sol()
{
    cin >> n >> k;
    f(i,n) cin >> a[i];
    f(i,n) cin >> b[i];

    sort(a.begin(),a.begin()+n);
    sort(b.begin(),b.begin()+n);

    //f(i,n) cout << a[i] << " " ;

    binSearch();

}
int main()
{
  int t;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    sol();
}
