#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int n, m, c; cin >> n >> m >> c;
  vector<int64_t> b(m);
  rep(i, m) {
    cin >> b[i];
  }

  int ans = 0;
  rep(i, n) {
    int sum = c;
    rep(j, m) {
      int a; cin >> a;
      sum += a * b[j];
    }
    if (sum > 0) ++ans;
  }

  // output
  cout << ans << endl;
}
