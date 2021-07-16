#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(int r) {
  string ans = "AGC";

  if (r < 1200) {
    ans = "ABC";
  } else if (r < 2800) {
    ans = "ARC";
  }

  return ans;
}

int main() {
  // input
  int r; cin >> r;

  // solve
  auto ans = solve(r);

  // output
  cout << ans << endl;
}
