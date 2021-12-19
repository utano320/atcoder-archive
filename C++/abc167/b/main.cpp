#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, k; cin >> a >> b >> c >> k;

  int ans = 0;
  if (k <= a) {
    ans = k;
  } else if (k <= a + b) {
    ans = a;
  } else {
    ans = a - (k - a - b);
  }
  // output
  cout << ans << endl;
}
