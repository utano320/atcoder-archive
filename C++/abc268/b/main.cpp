#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s, t; cin >> s >> t;
  int pos = t.find(s);
  string ans = "Yes";
  if (pos == string::npos || pos != 0) {
    ans = "No";
  }

  // output
  cout << ans << endl;
}
