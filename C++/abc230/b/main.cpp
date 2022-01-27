#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(string s) {
  int len = s.size();
  if (len == 1) return true;
  if (s.find("oo") != -1 || s.find("oxo") != -1 || s.find("xxx") != -1) return false;
  return true;
}

int main() {
  // input
  string s; cin >> s;

  // output
  cout << (solve(s) ? "Yes" : "No") << endl;
}
