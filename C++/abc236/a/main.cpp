#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  string s; cin >> s;
  int a, b; cin >> a >> b;

  // output
  rep(i, s.size()) {
    if (i == a - 1) {
      cout << s[b - 1];
    } else if (i == b - 1) {
      cout << s[a - 1];
    } else {
      cout << s[i];
    }
  }
  cout << endl;
}
