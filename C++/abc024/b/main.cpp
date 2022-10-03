#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, t; cin >> n >> t;
  int s = 0, e = 0;
  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a > e) {
      // ドアが閉まってから次の人が通った場合
      // 前の区間の開いていた時間が確定
      ans += e - s;
      s = a;
      e = a + t;
    } else {
      // ドアが開いている時に次の人が通った場合
      // ドアの開いている期間の延長
      e = a + t;
    }
  }
  // 最後の区間の開いていた時間が確定
  ans += e - s;

  // output
  cout << ans << endl;
}
