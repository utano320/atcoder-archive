#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(int a, int b) {
  if (abs(a - b) == 1) return true;
  if (abs(a - b) == 9) return true;
  return false;
}

int main() {
  // input
  int a, b; cin >> a >> b;
  // output
  cout << (solve(a, b) ? "Yes" : "No") << endl;
}
