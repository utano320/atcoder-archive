#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, k, s, t; cin >> a >> b >> c >> k >> s >> t;

  int ans = a * s + b * t;
  if (s + t >= k) ans -= (s + t) * c;

  // output
  cout << ans << endl;
}
