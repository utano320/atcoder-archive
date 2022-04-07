#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int x, y, z; cin >> x >> y >> z;

  x = x - y - 2 * z;
  int ans = 1 + x / (y + z);

  // output
  cout << ans << endl;
}
