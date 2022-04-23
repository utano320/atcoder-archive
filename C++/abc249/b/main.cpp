#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  bool a = false, b = false;
  set<char> sm;
  rep(i, s.size()) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      a = true;
    }
    if (s[i] >= 'A' && s[i] <= 'Z') {
      b = true;
    }
    sm.insert(s[i]);
  }

  // output
  cout << ((a && b && sm.size() == s.size()) ? "Yes" : "No") << endl;
}
