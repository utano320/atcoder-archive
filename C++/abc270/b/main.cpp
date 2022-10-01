#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int x, y, z; cin >> x >> y >> z;
  // ゴールのある方向を正にする
  if (x < 0) {
    x = -1 * x;
    y = -1 * y;
    z = -1 * z;
  }

  if (y > 0 && y < x && y < z) {
    // 壁の奥にハンマーとゴールがあれば不可能
    cout << -1 << endl;
  } else if (y > 0 && y < x && z < 0) {
    // ハンマーが負の方向にあれば取りに行って戻ってから到達可能
    cout << (-1 * z) * 2 + x << endl;
  } else {
    // それ以外はゴールまでの距離で到達可能
    cout << x << endl;
  }
}
