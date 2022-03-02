#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  int ans = 700;
  rep(i, 3) {
    if (s[i] == 'o') ans += 100;
  }

  // output
  cout << ans << endl;
}
