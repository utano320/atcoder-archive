#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

char solve(char c, int n) {
  char ans = c + n;
  if (ans > 'Z') ans -= 26;

  return ans;
}

int main() {
  // input
  int n; cin >> n;
  string s; cin >> s;

  // solve
  string ans = "";
  rep(i, s.size()) {
    char c = s[i];
    ans += solve(c, n);
  }

  // output
  cout << ans << endl;
}
