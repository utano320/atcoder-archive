#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;
  bool x = a + b == c;
  bool y = a - b == c;
  string ans = "?";
  if (!x && !y) {
    ans = "!";
  } else if (!x) {
    ans = "-";
  } else if (!y) {
    ans = "+";
  }

  // output
  cout << ans << endl;
}
