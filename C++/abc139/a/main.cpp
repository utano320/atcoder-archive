#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s, t; cin >> s >> t;

  int ans = 0;
  rep(i, 3) {
    if (s[i] == t[i]) ans++;
  }

  // output
  cout << ans << endl;
}