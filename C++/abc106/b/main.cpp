#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n) {
  int64_t ans = 0;

  rep(i, n) {
    if (n % (i + 1) == 0) ans++;
  }

  return ((ans == 8) ? 1 : 0);
}

int main() {
  // input
  int n; cin >> n;
  // solve
  int ans = 0;
  rep(i, n) {
    int t = i + 1;
    if (t % 2 == 1) ans += solve(t);
  }

  // output
  cout << ans << endl;
}
