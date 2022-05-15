#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k; cin >> n >> k;
  vector<int64_t> l(n);
  rep(i, n) {
    cin >> l[i];
  }

  sort(l.begin(), l.end());
  reverse(l.begin(), l.end());

  int ans = 0;
  rep(i, k) {
    ans += l[i];
  }

  // output
  cout << ans << endl;
}
