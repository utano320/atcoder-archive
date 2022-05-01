#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(int a, int b, string s) {
  rep(i, a + b + 1) {
    char p = s[i];
    if (i == a) {
      if (p != '-') return false;
    } else {
      if (p < '0' || '9' < p) return false;
    }
  }
  return true;
}

int main() {
  // input
  int a, b; cin >> a >> b;
  string s; cin >> s;
  int l = a + b + 1;

  // output
  cout << (solve(a, b, s) ? "Yes" : "No") << endl;
}
