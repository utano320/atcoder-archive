#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  int ans = abs(a - b);
  if (ans > 5) ans = 10 - ans;

  // output
  cout << ans << endl;
}
