#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;

  int p = 1;
  int ans = 0;
  rep(i, n) {
    int a; cin >> a;
    if (x & p) ans += a;
    p *= 2;
  }

  // output
  cout << ans << endl;
}
