#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s, t; cin >> s >> t;

  bool ans = true;
  rep(i, s.size()) {
    char a = s[i];
    char b = t[i];

    if (a == b) continue;

    if (a == '@') {
      if (b == 'a' || b == 't' || b == 'c' || b == 'o' || b == 'd' || b == 'e' || b == 'r') {
        continue;
      }
    } else if (b == '@') {
      if (a == 'a' || a == 't' || a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'r') {
        continue;
      }
    }

    ans = false;
    break;
  }

  // output
  cout << (ans ? "You can win" : "You will lose") << endl;
}
