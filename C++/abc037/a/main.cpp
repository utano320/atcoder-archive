#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;
  int h, l;
  if (a > b) {
    h = a;
    l = b;
  } else {
    h = b;
    l = a;
  }
  int ans = c / l;
  ans += (c % l) / h;

  // output
  cout << ans << endl;
}
