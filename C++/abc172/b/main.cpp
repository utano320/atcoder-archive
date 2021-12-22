#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(string s, string t) {
  int count = 0;

  rep(i, s.size()) {
    if (s[i] != t[i]) ++count;
  }

  return count;
}

int main() {
  // input
  string s, t; cin >> s >> t;

  // solve
  int ans = solve(s, t);

  // output
  cout << ans << endl;
}
