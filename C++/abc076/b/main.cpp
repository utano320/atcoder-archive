#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int n, k; cin >> n >> k;
  int ans = 1;
  rep(i, n) {
    ans = min(ans * 2, ans + k);
  }

  // output
  cout << ans << endl;
}
