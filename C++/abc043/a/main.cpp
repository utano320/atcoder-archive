#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    ans += i + 1;
  }

  // output
  cout << ans << endl;
}
