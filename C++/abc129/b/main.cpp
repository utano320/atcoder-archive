#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(vector<int> w, int t) {
  int l = 0, r = 0;
  rep(i, w.size()) {
    if (i <= t) {
      l += w[i];
    } else {
      r += w[i];
    }
  }

  return abs(l - r);
}

int main() {
  // input
  int n; cin >> n;
  vector<int> w(n);
  rep(i, n) {
    cin >> w[i];
  }

  // solve
  int ans = 10000;
  rep(t, n) {
    ans = min(solve(w, t), ans);
  }

  // output
  cout << ans << endl;
}
