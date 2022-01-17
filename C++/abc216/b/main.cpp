#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  set<string> a;
  string ans = "No";
  rep(i, n) {
    string s, t; cin >> s >> t;
    string key = s + " " + t;
    if (a.count(key) == 1) {
      ans = "Yes";
      break;
    }
    a.insert(key);
  }

  cout << ans << endl;
}
