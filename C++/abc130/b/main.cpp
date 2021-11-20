#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;
  int d = 0;
  int ans = 1;
  rep(i, n) {
    int l;
    cin >> l;
    d += l;
    if (d > x) break;
    ++ans;
  }

  // output
  cout << ans << endl;
}
