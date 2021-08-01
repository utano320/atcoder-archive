#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, d, e, k; cin >> a >> b >> c >> d >> e >> k;

  string ans = ":(";
  if (e - a <= k) {
    ans = "Yay!";
  }

  // output
  cout << ans << endl;
}
