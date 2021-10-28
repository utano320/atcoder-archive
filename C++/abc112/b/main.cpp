#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int n, t; cin >> n >> t;
  int ans = 1001;
  rep(i, n) {
    int ci, ti;
    cin >> ci >> ti;
    if (ti <= t && ci < ans) ans = ci;
  }

  if (ans == 1001) {
    cout << "TLE" << endl;
  } else {
    cout << ans << endl;
  }
}
