#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int s, t, x; cin >> s >> t >> x;
  string ans = "No";
  if (s > t) {
    // 日付をまたいだ場合
    if (s <= x && x < 24 || 0 <= x && x < t) ans = "Yes";
  } else {
    // 日付をまたいでいない場合
    if (s <= x && x < t) ans = "Yes";
  }

  // output
  cout << ans << endl;
}
