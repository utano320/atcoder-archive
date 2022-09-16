#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int l, h, n; cin >> l >> h >> n;

  rep(i, n) {
    int a;
    cin >> a;

    if (a > h) {
      cout << -1 << endl;
    } else {
      int ans = l - a;
      cout << max(0, ans) << endl;
    }
  }
}
