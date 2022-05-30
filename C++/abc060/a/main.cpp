#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(string a, string b, string c) {
  if (a[a.length() - 1] != b[0]) return false;
  if (b[b.length() - 1] != c[0]) return false;

  return true;
}

int main() {
  // input
  string a, b, c; cin >> a >> b >> c;

  // output
  cout << (solve(a, b, c) ? "YES" : "NO") << endl;
}
