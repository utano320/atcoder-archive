#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int r, c; cin >> r >> c;
  r--; c--;
  if (r > 7) r = 14 - r;
  if (c > 7) c = 14 - c;
  bool isEvenRow = r % 2 == 0;
  bool isEvenCol = c % 2 == 0;

  string ans = "";
  if (r <= c) {
    ans = isEvenRow ? "black" : "white";
  } else {
    ans = isEvenCol ? "black" : "white";
  }

  // output
  cout << ans << endl;
}
