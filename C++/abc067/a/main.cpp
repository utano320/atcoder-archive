#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int a, int b) {
  if (a % 3 == 0) return true;
  if (b % 3 == 0) return true;
  if ((a + b) % 3 == 0) return true;

  return false;
}

int main() {
  // input
  int a, b; cin >> a >> b;
  // solve
  string ans = solve(a, b) ? "Possible" : "Impossible";

  // output
  cout << ans << endl;
}
