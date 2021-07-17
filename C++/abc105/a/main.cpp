#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, int k) {
  int64_t ans;

  if (n % k == 0) {
    ans = 0;
  } else {
    ans = 1;
  }

  return ans;
}

int main() {
  // input
  int n, k; cin >> n >> k;

  // solve
  auto ans = solve(n, k);

  // output
  cout << ans << endl;
}
