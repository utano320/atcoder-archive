#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(int s) {
  int a = 1;
  while (s - 3 * a > 0) {
    if ((s - 3 * a) % (4 * a + 3) == 0) return true;
    a++;
  }
  return false;
}

int main() {
  // input
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    int s; cin >> s;
    if (!solve(s)) ans++;
  }

  // output
  cout << ans << endl;
}
