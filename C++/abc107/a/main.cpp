#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, int i) {
  int64_t ans;
  ans = n + 1 - i;
  return ans;
}

int main() {
  // input
  int n, i; cin >> n >> i;

  // solve
  auto ans = solve(n, i);

  // output
  cout << ans << endl;
}
