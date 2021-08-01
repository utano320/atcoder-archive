#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, t; cin >> a >> b >> t;

  int ans = 0;
  t -= a;
  while (t >= 0) {
    ans += b;
    t -= a;
  }
  // output
  cout << ans << endl;
}
