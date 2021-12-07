#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k, m; cin >> n >> k >> m;
  int sum = 0;
  rep(i, n - 1) {
    int a;
    cin >> a;
    sum += a;
  }
  int ans = n * m - sum;
  if (ans > k) {
    ans = -1;
  } else if (ans < 0) {
    ans = 0;
  }

  // output
  cout << ans << endl;
}
