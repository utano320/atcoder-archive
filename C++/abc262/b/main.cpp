#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m; cin >> n >> m;
  vector< vector<int> > a(n, vector<int>(n));

  rep(i, n) {
    rep(j, n) {
      a[i][j] = 0;
    }
  }

  rep(i, m) {
    int u, v; cin >> u >> v;
    a[u - 1][v - 1] = 1;
  }

  int ans = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (a[i][j] == 1 && a[j][k] == 1 && a[i][k] == 1) ans++;
      }
    }
  }

  // output
  cout << ans << endl;
}
