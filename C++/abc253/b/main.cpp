#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int h, w; cin >> h >> w;
  int ai = -1, aj = -1, bi = -1, bj = -1;
  rep(i, h) {
    string s;
    cin >> s;
    rep(j, w) {
      if (s[j] == 'o') {
        if (ai == -1) {
          ai = i;
          aj = j;
        } else {
          bi = i;
          bj = j;
        }
      }
    }
  }

  int ans = abs(ai - bi) + abs(aj - bj);

  // output
  cout << ans << endl;
}
