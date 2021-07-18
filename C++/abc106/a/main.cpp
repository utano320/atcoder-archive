#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int a, int b) {
  int64_t ans;

  ans = (a - 1) * (b - 1);
  return ans;
}

int main() {
  // input
  int a, b; cin >> a >> b;

  // solve
  auto ans = solve(a, b);

  // output
  cout << ans << endl;
}
