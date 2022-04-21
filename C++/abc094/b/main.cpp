#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m, x; cin >> n >> m >> x;
  vector<int> am(n);
  rep(i, n) {
    am[i] = 0;
  }
  rep(i, m) {
    int a;
    cin >> a;
    am[a] = 1;
  }
  int ans = m;
  int t = 0;
  for (int i = x + 1; i < n; i++) {
    t += am[i];
  }
  ans = min(ans, t);
  t = 0;
  for (int i = x - 1; i > 0; i--) {
    t += am[i];
  }
  ans = min(ans, t);

  // output
  cout << ans << endl;
}
