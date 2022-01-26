#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(int a, int b, bool c) {
  int ans = a + b + ((c) ? 1 : 0);

  return ans >= 10;
}

int main() {
  // input
  string at, bt; cin >> at >> bt;
  string a(at), b(bt);
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int n = max(a.size(), b.size()) + 1;
  bool c = false;
  bool ans = false;
  rep(i, n) {
    int ai = ((a.size() > i) ? a[i] - '0' : 0);
    int bi = ((b.size() > i) ? b[i] - '0' : 0);
    c = solve(ai, bi, c);
    if (c) {
      ans = true;
      break;
    }
  }

  // output
  cout << ((ans) ? "Hard" : "Easy") << endl;
}
