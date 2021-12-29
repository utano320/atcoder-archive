#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int64_t a, b, c, d; cin >> a >> b >> c >> d;
  int64_t ans = max(max(a*c, a*d), max(b*c, b*d));

  // output
  cout << ans << endl;
}
