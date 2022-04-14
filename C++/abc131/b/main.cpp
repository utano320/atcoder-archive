#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, l; cin >> n >> l;
  int index = l >= 0 ? 0 : min(-l, n - 1);
  int ans = 0;
  rep(i, n) {
    if (i == index) {
      continue;
    }
    ans += l + i;
  }

  // output
  cout << ans << endl;
}
