#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, x; cin >> a >> b >> c >> x;

  double ans = 0;
  if (x <= a) {
    ans = 1;
  } else if (x <= b) {
    ans = (double)c / (b - a);
  }
  // output
  cout << fixed << setprecision(12) << ans << endl;
}
