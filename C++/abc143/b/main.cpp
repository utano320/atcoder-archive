#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int64_t> d(n);
  rep(i, n) {
    cin >> d[i];
  }

  int ans = 0;
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      ans += d[i] * d[j];
    }
  }

  // output
  cout << ans << endl;
}
