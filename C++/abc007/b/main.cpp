#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string a; cin >> a;
  string ans;
  if (a == "a") {
    // aの場合は存在しない
    ans = "-1";
  } else if (a.size() > 1) {
    // 2文字以上の場合は最後の1文字を削る
    ans = a.substr(0, a.size() - 1);
  } else {
    // 1文字の場合はひとつ前の文字を出力する
    ans = char(a[0] - 1);
  }

  cout << ans << endl;
}
