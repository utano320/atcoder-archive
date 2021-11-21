#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int n; cin >> n;
  vector<int> p(n);
  rep(i, n) {
    cin >> p[i];
  }

  int ans = 0;
  for (int i = 2; i < n; i++) {
    if (p[i - 2] < p[i - 1] && p[i - 1] < p[i] || p[i - 2] > p[i - 1] && p[i - 1] > p[i]) ++ans;
  }

  // output
  cout << ans << endl;
}
