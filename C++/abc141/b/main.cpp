#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(string s) {
  for (int i = 0; i < s.size(); ++i) {
    if ((i + 1) % 2 == 1 && s[i] == 'L') return false;
    if ((i + 1) % 2 == 0 && s[i] == 'R') return false;
  }
  return true;
}

int main() {
  // input
  string s; cin >> s;

  // solve
  auto ans = solve(s);

  // output
  cout << ((ans) ? "Yes" : "No") << endl;
}
