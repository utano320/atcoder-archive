#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k; cin >> n >> k;
  int ans = 0;
  rep(i, n) {
    int h;
    cin >> h;

    if (h >= k) ++ans;
  }

  // output
  cout << ans << endl;
}
