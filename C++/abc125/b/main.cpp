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
  vector<int64_t> v(n);
  rep(i, n) {
    cin >> v[i];
  }
  int ans = 0;
  rep(i, n) {
    int c;
    cin >> c;
    int xy = v[i] - c;
    if (xy > 0) ans += xy;
  }

  // output
  cout << ans << endl;
}
