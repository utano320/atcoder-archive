#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m, t; cin >> n >> m >> t;
  int maxN = n;
  int p = 0;
  rep(i, m) {
    int a, b; cin >> a >> b;
    // カフェに着くまで減る
    n -= a - p;
    // 足りなくなったら終了
    if (n <= 0) break;
    // カフェに居る間増える
    n += b - a;
    if (n > maxN) n = maxN;

    p = b;
  }

  // 帰宅中は減る
  n -= t - p;

  // output
  cout << (n > 0 ? "Yes" : "No") << endl;
}
