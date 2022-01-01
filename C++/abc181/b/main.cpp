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
  long long ans = 0;
  rep(i, n) {
    int a, b; cin >> a >> b;
    int m = b - a;
    ans += (long long)(2 * a + m) * (m + 1);
  }

  ans /= 2;

  // output
  cout << ans << endl;
}
