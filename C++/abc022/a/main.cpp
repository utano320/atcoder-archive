#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, s, t, w; cin >> n >> s >> t >> w;
  int ans = 0;
  if (w >= s && w <= t) ans++;
  rep(i, n - 1) {
    int a; cin >> a;
    w += a;
    if (w >= s && w <= t) ans++;
  }

  // output
  cout << ans << endl;
}
