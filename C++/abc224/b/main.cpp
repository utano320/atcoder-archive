#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int h, w; cin >> h >> w;
  vector< vector<int> > a(h, vector<int>(w));
  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
    }
  }

  string ans = "Yes";
  rep(i, h - 1) {
    rep(j, w - 1) {
      if (a[i][j] + a[i + 1][j + 1] > a[i + 1][j] + a[i][j + 1]) {
        ans = "No";
        break;
      }
    }
  }

  // output
  cout << ans << endl;
}
