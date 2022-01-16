#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(int a, int b, int c, int s, int t) {
  if (a + b + c > s) return false;
  if (a * b * c > t) return false;
  return true;
}

int main() {
  // input
  int s, t; cin >> s >> t;
  int ans = 0;
  rep(i, 101) {
    rep(j, (101 - i)) {
      rep(k, (101 - i - j)) {
        if (solve(i, j, k, s, t)) ans++;
      }
    }
  }

  // output
  cout << ans << endl;
}
