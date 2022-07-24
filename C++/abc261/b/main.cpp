#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector< vector<char> > a(n, vector<char>(n));
  rep(i, n) {
    rep(j, n) {
      cin >> a[i][j];
    }
  }

  string ans = "correct";
  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;
      if (a[i][j] == 'W' && a[j][i] == 'L') continue;
      if (a[i][j] == 'L' && a[j][i] == 'W') continue;
      if (a[i][j] == 'D' && a[j][i] == 'D') continue;
      ans = "incorrect";
      break;
    }
  }

  // output
  cout << ans << endl;
}
