#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    int a; cin >> a;
    a -= 10;
    ans += max(a, 0);
  }

  // output
  cout << ans << endl;
}
