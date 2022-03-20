#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int diff(char a, char b) {
  int d = b - a;
  if (d < 0) d += 26;
  return d;
}

int main() {
  // input
  string s, t; cin >> s >> t;

  int k = -1;
  string ans = "Yes";
  rep(i, s.size()) {
    int d = diff(s[i], t[i]);
    if (k == -1) {
      k = d;
    } else if (k != d) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;
}
