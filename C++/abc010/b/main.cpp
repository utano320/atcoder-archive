#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    int a; cin >> a;
    int b;
    if (a >= 9) {
      b = 9;
    } else if (a >= 7) {
      b = 7;
    } else if (a >= 3) {
      b = 3;
    } else {
      b = 1;
    }
    ans += a - b;
  }

  // output
  cout << ans << endl;
}
