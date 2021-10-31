#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int n, t, a; cin >> n >> t >> a;
  double atmin = 10000;
  int ans;
  rep(i, n) {
    int h;
    cin >> h;
    double at = abs(a - t + 0.006 * h);
    if (atmin > at) {
      atmin = at;
      ans = i + 1;
    }
  }

  // output
  cout << ans << endl;
}
