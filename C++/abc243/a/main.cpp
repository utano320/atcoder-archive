#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int v, a, b, c; cin >> v >> a >> b >> c;

  char ans = 'T';
  while (v >= 0) {
    if (ans == 'F') {
      ans = 'M';
      v -= b;
    } else if (ans == 'M') {
      ans = 'T';
      v -= c;
    } else {
      ans = 'F';
      v -= a;
    }
  }

  // output
  cout << ans << endl;
}
