#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(string a, string b) {
  if (a.size() > b.size()) return "GREATER";
  if (b.size() > a.size()) return "LESS";

  if (a == b) return "EQUAL";

  rep(i, a.size()) {
    if (a[i] > b[i]) return "GREATER";
    if (b[i] > a[i]) return "LESS";
  }
}

int main() {
  // input
  string a, b; cin >> a >> b;
  // output
  cout << solve(a, b) << endl;
}
