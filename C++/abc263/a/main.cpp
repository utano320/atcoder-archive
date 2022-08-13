#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int x = 0;
  int xc = 0;
  int y = 0;
  int yc = 0;
  string ans = "Yes";

  rep(i, 5) {
    int a; cin >> a;
    if (x == 0 || x == a) {
      x = a;
      xc++;
    } else if (y == 0 || y == a) {
      y = a;
      yc++;
    } else {
      ans = "No";
      break;
    }
  }

  if (max(xc, yc) != 3) ans = "No";

  // output
  cout << ans << endl;
}
