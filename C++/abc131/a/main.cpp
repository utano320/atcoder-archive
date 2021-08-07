#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;

  string ans = "Good";
  rep(i, 3) {
    if (s[i] == s[i+1]) {
      ans = "Bad";
      break;
    }
  }

  // output
  cout << ans << endl;
}
