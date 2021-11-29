#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int n) {
  for (int i = 1; i <= 9; ++i) {
    for (int j = 1; j <= 9; ++j) {
      if (i * j == n) return true;
    }
  }
  return false;
}

int main() {
  // input
  int n; cin >> n;

  // solve
  bool ans = solve(n);

  // output
  cout << ((ans) ? "Yes" : "No") << endl;
}
