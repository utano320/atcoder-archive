#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  int ans = 0;

  rep(i, 2) {
    if (a > b) {
      ans += a;
      a--;
    } else {
      ans += b;
      b--;
    }
  }

  // output
  cout << ans << endl;
}
