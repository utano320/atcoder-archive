#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(int n, string s) {
  if (n % 2 != 0) return "No";
  int p = n / 2;
  if (s.substr(0, p) != s.substr(p)) return "No";
  return "Yes";
}

int main() {
  // input
  int n; cin >> n;
  string s; cin >> s;

  // output
  cout << solve(n, s) << endl;
}
