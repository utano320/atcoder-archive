#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    int l, r;
    cin >> l >> r;
    ans += r - l + 1;
  }

  // output
  cout << ans << endl;
}
