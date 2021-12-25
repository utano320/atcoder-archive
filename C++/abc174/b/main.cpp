#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

double solve(long long x, long long y) {
  return sqrt(x * x + y * y);
}

int main() {
  // input
  long long n, d; cin >> n >> d;

  int ans = 0;
  rep(i, n) {
    long long x, y;
    cin >> x >> y;
    if (solve(x, y) <= d) ++ans;
  }

  // output
  cout << ans << endl;
}
