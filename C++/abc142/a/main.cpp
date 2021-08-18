#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  double ans;
  if (n == 1) {
    ans = 1.0;
  } else if (n % 2 == 0) {
    ans = 0.5;
  } else {
    ans = (n + 1.0) / (2.0 * n);
  }
  // output
  cout << setprecision(10) << fixed << ans << endl;
}