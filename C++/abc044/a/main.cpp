#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k, x, y; cin >> n >> k >> x >> y;

  int ans = 0;
  rep(i, n) {
    if (i < k) {
      ans += x;
    } else {
      ans += y;
    }
  }

  // output
  cout << ans << endl;
}
