#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    int h; cin >> h;
    if (ans >= h) {
      break;
    }
    ans = h;
  }

  // output
  cout << ans << endl;
}
