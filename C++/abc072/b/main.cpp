#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;

  rep(i, s.size()) {
    if (i % 2 == 0) cout << s[i];
  }

  // output
  cout << endl;
}
