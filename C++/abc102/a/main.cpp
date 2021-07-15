#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n) {
  int64_t ans = n;
  if (n % 2 == 1)
    ans *= 2;
  return ans;
}

int main() {
  // input
  int n; cin >> n;
  
  // solve
  auto ans = solve(n);

  // output
  cout << ans << endl;
}
