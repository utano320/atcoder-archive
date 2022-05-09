#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;

  int ans = a;
  if (a == b) {
    ans = c;
  } else if (a == c) {
    ans = b;
  }

  // output
  cout << ans << endl;
}
