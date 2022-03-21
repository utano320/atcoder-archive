#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  string t; cin >> t;

  int x = 0, y = 0;
  int r = 2;
  rep(i, n) {
    char c = t[i];
    if (c == 'S') {
      if (r % 2 == 0) {
        x += r - 1;
      } else {
        y -= r - 2;
      }
    } else {
      r = (r + 1) % 4;
    }
  }

  // output
  cout << x << ' ' << y << endl;
}
