#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, d; cin >> a >> b >> c >> d;

  int ans = 0;
  if (a <= c && c <= b) {
    ans = min(b, d) - c;
  } else if (a <= d && d <= b) {
    ans = d - a;
  } else if (c <= a && b <= d) {
    ans = b - a;
  }

  // output
  cout << ans << endl;
}
