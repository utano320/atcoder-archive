#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a; cin >> a;
  int ans = 0;
  for (int x = 1; x < a; x++) {
    int y = a - x;
    ans = max(ans, x * y);
  }

  // output
  cout << ans << endl;
}
