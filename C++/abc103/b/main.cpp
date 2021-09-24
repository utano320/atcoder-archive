#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t; cin >> s >> t;
  int len = s.size();
  string ans = "No";

  rep(i, len) {
    s = s.substr(len - 1, 1) + s.substr(0, len - 1);
    if (s == t) {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;
}