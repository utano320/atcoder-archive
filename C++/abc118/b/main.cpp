#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m; cin >> n >> m;
  vector<int64_t> sum(m);
  rep(i, n) {
    int k; cin >> k;
    rep(j, k) {
      int a; cin >> a;
      sum[a - 1]++;
    }
  }

  int ans = 0;
  rep(i, m) {
    if (sum[i] == n) ans++;
  }

  // output
  cout << ans << endl;
}
