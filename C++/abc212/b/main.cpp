#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(string x) {
  if (x[0] == x[1] && x[0] == x[2] && x[0] == x[3]) return false;

  rep(i, 3) {
    int a = x[i] - '0';
    if (a == 9) a = -1;
    int b = x[i + 1] - '0';
    if (a + 1 != b) return true;
  }

  return false;
}

int main() {
  // input
  string s; cin >> s;

  // output
  cout << ((solve(s)) ? "Strong" : "Weak") << endl;
}
