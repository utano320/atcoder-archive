#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int l, r; cin >> l >> r;
  string s = "atcoder";

  // output
  cout << s.substr(l - 1, r - l + 1) << endl;
}
