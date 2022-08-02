#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 100;
  rep(i, n) {
    int t;
    cin >> t;

    ans = min(ans, t);
  }

  // output
  cout << ans << endl;
}
