#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, d; cin >> a >> b >> c >> d;
  int l = a + b;
  int r = c + d;

  string ans = "Balanced";
  if (l > r) {
    ans = "Left";
  } else if (r > l) {
    ans = "Right";
  }

  // output
  cout << ans << endl;
}
