#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  // solve
  int ans = 800 * n - 200 * (n / 15);

  // output
  cout << ans << endl;
}
