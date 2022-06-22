#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(int a, int b, int c) {
  if (a + b == c) return "Yes";
  if (b + c == a) return "Yes";
  if (c + a == b) return "Yes";

  return "No";
}

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;

  // output
  cout << solve(a, b, c) << endl;
}
