#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;

  string ans = "";
  int n = 6 / s.size();
  rep(i, n) {
    ans += s;
  }

  // output
  cout << ans << endl;
}
