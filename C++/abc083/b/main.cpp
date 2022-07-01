#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int sum(int d) {
  int s = 0;
  while (d > 0) {
    s += d % 10;
    d = d / 10;
  }

  return s;
}

int main() {
  // input
  int n, a, b; cin >> n >> a >> b;
  int ans = 0;
  rep(i, n) {
    int s = sum(i);
    if (a <= s && s <= b) ans += i;
  }

  // output
  cout << ans << endl;
}
