#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int x, a, b; cin >> x >> a >> b;

  string ans = "";
  if (a >= b) {
    ans = "delicious";
  } else if (x + a >= b) {
    ans = "safe";
  } else {
    ans = "dangerous";
  }
  // output
  cout << ans << endl;
}
