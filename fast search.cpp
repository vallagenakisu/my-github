#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int n, a[N];

int solve(int x) { // number of elements having value <= x
  int l = 1, r = n, ans = 0;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (a[mid] <= x) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  int q; cin >> q;
  while (q--) {
    int l, r; cin >> l >> r;
    cout << solve(r) <<" " <<  solve(l - 1) << endl;
  }
  cout << '\n';
  return 0;
}
