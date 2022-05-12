#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  int ans = 45;
  rep(i, 9) {
    ans -= s[i] - '0';
  }

  // output
  cout << ans << endl;
}
