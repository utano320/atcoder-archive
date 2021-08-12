#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  string ans = "IMPOSSIBLE";
  int d = abs(a - b);
  if (d % 2 == 0) {
    ans = to_string(d / 2 + min(a, b));
  }

  // output
  cout << ans << endl;
}