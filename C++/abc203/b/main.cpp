#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k; cin >> n >> k;

  int ans = 0;
  rep(i, n) {
    rep (j, k) {
      ans += (i + 1) * 100 + (j + 1);
    }
  }

  // output
  cout << ans << endl;
}
