#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  string ans = "ist";
  if (s.size() == 2) {
    ans = "er";
  } else {
    ans = ((s.substr(s.size() - 2) == "er") ? "er" : "ist");
  }

  // output
  cout << ans << endl;
}
