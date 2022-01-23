#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(string s, string t) {
  // 完全に一致してたらYes
  if (s == t) return "Yes";

    // 隣り合う2文字が逆にして1回でも一致したらYes
  for (int i = 0; i < s.size() - 1; i++) {
    string sa = s.substr(0, i);
    string sb = s.substr(i + 2);
    string sc = s.substr(i, 2);

    string ta = t.substr(0, i);
    string tb = t.substr(i + 2);
    string tc = t.substr(i, 2);
    string tcr(tc);
    reverse(tcr.begin(), tcr.end());

    if (sa == ta && sb == tb && sc == tcr) return "Yes";
  }

  // 最後まで一致しなければNo
  return "No";
}

int main() {
  // input
  string s, t; cin >> s >> t;
  // output
  cout << solve(s, t) << endl;
}
