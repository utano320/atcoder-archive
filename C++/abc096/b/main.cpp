#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector<int> a(3);
  rep(i, 3) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  int k; cin >> k;

  rep(i, k) {
    a[2] *= 2;
  }
  int ans = a[0] + a[1] + a[2];

  // output
  cout << ans << endl;
}
