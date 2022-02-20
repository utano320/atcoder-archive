#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  double h; cin >> h;

  double ans = sqrt(h * (12800000 + h));

  // output
  cout << fixed << setprecision(6) << ans << endl;
}
