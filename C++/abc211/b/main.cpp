#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  set<string> ss;
  string ans = "Yes";
  rep(i, 4) {
    string s; cin >> s;
    if (ss.count(s) > 0) {
      ans = "No";
      break;
    }
    ss.insert(s);
  }

  // output
  cout << ans << endl;
}
