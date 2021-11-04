#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int n; cin >> n;
  int m = 0;
  int ans = 0;
  rep(i, n) {
    int p;
    cin >> p;
    if (m < p) m = p;
    ans += p;
  }

  ans -= m / 2;

  // output
  cout << ans << endl;
}
