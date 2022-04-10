#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool r(string a) {
  int l = a.size();
  int n = l / 2;

  rep(i, n) {
    if (a[i] != a[l - 1 - i]) return false;
  }

  return true;
}

bool solve(string a) {
  int n = a.size();
  if (!r(a)) return false;
  if (!r(a.substr(0, (n - 1) / 2))) return false;
  if (!r(a.substr((n + 3) / 2 - 1))) return false;
  return true;
}

int main() {
  // input
  string s; cin >> s;

  // output
  cout << (solve(s) ? "Yes" : "No") << endl;
}
