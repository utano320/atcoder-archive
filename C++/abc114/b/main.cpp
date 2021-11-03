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

  int ans = 1000;
  for (int i = 0; i < s.size() - 2; i++) {
    int a = abs(753 - atoi(s.substr(i, 3).c_str()));
    if (a < ans) ans = a;
  }

  // output
  cout << ans << endl;
}
