#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int m) {
  if (m < 100) {
    return 0;
  } else if (m <= 5000) {
    return m / 100;
  } else if (m >= 6000 && m <= 30000) {
    return m / 1000 + 50;
  } else if (m >= 35000 && m <= 70000) {
    return (m - 30000) / 5000 + 80;
  } else {
    return 89;
  }
}

int main() {
  // input
  int m; cin >> m;

  // solve
  int ans = solve(m);

  // output
  cout << setfill('0') << right << setw(2) << ans << endl;
}
