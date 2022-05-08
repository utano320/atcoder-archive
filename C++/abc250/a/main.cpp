#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int h, w, r, c; cin >> h >> w >> r >> c;

  // solve
  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if (abs(r - 1 - i) + abs(c - 1 - j) == 1) ans++;
    }
  }

  // output
  cout << ans << endl;
}
