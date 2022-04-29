#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  double sx, sy, gx, gy; cin >> sx >> sy >> gx >> gy;

  // solve
  double x = (sx * gy + sy * gx) / (sy + gy);

  // output
  cout << fixed << setprecision(6) << x << endl;
}
