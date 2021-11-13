#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  string s; cin >> s;
  int ans = 0;
  int t = 0;
  rep(i, s.size()) {
    char c = s[i];
    if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
      ++t;
      ans = max(ans, t);
    } else {
      t = 0;
    }
  }

  // output
  cout << ans << endl;
}
