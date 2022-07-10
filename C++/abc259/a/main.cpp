#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m, x, t, d; cin >> n >> m >> x >> t >> d;

  int ans;
  if (m > x) {
    ans = t;
  } else {
    // 0歳の時の身長を求める
    int b = t - d * x;
    ans = d * m + b;
  }

  // output
  cout << ans << endl;
}
