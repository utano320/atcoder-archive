#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (int)(n); i++)

int main() {
  // input
  int a, b, c, x; cin >> a >> b >> c >> x;
  int ans = 0;
  rep(i, a) {
    rep(j, b) {
      rep(k, c) {
        if (x == 500 * i + 100 * j + 50 * k) ans++;
      }
    }
  }

  // output
  cout << ans << endl;
}
