#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int64_t ans = 1;
  rep(i, n) {
    ans = ans * (i + 1) % 1000000007;
  }

  // output
  cout << ans << endl;
}
