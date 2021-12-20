#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(int x, int y) {
  rep(i, x + 1) {
    int a = i;
    int b = x - i;
    if (a * 2 + b * 4 == y) return true;
  }

  return false;
}

int main() {
  // input
  int x, y; cin >> x >> y;

  // solve
  bool ans = solve(x, y);

  // output
  cout << (ans ? "Yes" : "No") << endl;
}
