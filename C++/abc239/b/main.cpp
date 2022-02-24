#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int64_t x; cin >> x;
  bool minus = x < 0;
  int last = abs(x % 10);

  int64_t ans = x / 10;
  if (minus && last > 0) {
    ans--;
  }
  // output
  cout << ans << endl;
}
