#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int w, a, b; cin >> w >> a >> b;

  int ans = 0;
  if (a >= b) {
    ans = a - (b + w);
  } else {
    ans = b - (a + w);
  }
  ans = max(0, ans);

  // output
  cout << ans << endl;
}
