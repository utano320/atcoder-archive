#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  // solve
  int ans = 0;
  if (n >= 10000) ans += min(99999, n) - 10000 + 1;
  if (n >= 100) ans += min(999, n) - 100 + 1;
  ans += min(9, n);

  // output
  cout << ans << endl;
}
