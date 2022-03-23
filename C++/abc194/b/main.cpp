#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) {
    cin >> a[i] >> b[i];
  }

  int ans = 2000;
  rep(i, n) {
    rep(j, n) {
      int t = 0;
      if (i == j) {
        t = a[i] + b[j];
      } else {
        t = max(a[i], b[j]);
      }
      ans = min(t, ans);
    }
  }

  // output
  cout << ans << endl;
}
