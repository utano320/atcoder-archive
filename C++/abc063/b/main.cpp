#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  set<char> c;
  rep(i, s.size()) {
    c.insert(s[i]);
  }

  // output
  cout << ((c.size() == s.size()) ? "yes" : "no") << endl;
}
