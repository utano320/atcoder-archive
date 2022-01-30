#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int l, r; cin >> l >> r;
  string s; cin >> s;

  string t = s.substr(l - 1, r - l + 1);
  reverse(t.begin(), t.end());

  string ans = s.substr(0, l - 1) + t + s.substr(r);
  // output
  cout << ans << endl;
}
