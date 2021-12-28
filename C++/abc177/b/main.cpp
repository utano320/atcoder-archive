#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(string s, string t) {
  int slen = s.size();
  int tlen = t.size();
  int ans = tlen;
  // sを1文字ずつずらして比較
  for (int i = 0; i < slen - tlen + 1; i++) {
    // sの部分文字列
    string ss = s.substr(i, tlen);
    // ssとtの差分のカウント
    int count = 0;
    // 差分をカウント
    for (int j = 0; j < tlen; j++) {
      if (t[j] != ss[j]) ++count;
    }
    // 最小値の更新
    ans = min(ans, count);
  }

  return ans;
}

int main() {
  // input
  string s, t; cin >> s >> t;

  // solve
  int ans = solve(s, t);

  // output
  cout << ans << endl;
}
