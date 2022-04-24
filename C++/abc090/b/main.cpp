#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int t) {
  string s = to_string(t);
  int len = s.size();
  int result = 1;
  rep(i, len / 2) {
    if (s[i] != s[len - i - 1]) {
      result = 0;
      break;
    }
  }

  return result;
}

int main() {
  // input
  int a, b; cin >> a >> b;
  int ans = 0;
  for (int i = a; i <= b; i++) {
    ans += solve(i);
  }

  // output
  cout << ans << endl;
}
