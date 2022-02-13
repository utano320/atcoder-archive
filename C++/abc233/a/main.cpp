#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int x, y; cin >> x >> y;
  int ans = 0;

  while (x < y) {
    x += 10;
    ans++;
  }

  // output
  cout << ans << endl;
}
