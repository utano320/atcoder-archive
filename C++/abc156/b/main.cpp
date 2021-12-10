#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k; cin >> n >> k;
  int ans = 0;

  if (n == 0) ++ans;

  while (n > 0) {
    n = n / k;
    ++ans;
  }

  // output
  cout << ans << endl;
}
