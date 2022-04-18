#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;
  int minM = 1000;
  rep(i, n) {
    int m; cin >> m;
    minM = min(minM, m);
    x -= m;
  }

  int ans = n + x / minM;

  // output
  cout << ans << endl;
}
