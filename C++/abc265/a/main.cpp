#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int x, y, n; cin >> x >> y >> n;

  int ans = 0;
  if (x > (double)(y / 3)) {
    // yの方が安い
    int s = n / 3;
    ans = s * y;
    n -= s * 3;
  }
  ans += n * x;

  // output
  cout << ans << endl;
}
