#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) {
    cin >> a[i];
  }
  rep(i, n) {
    cin >> b[i];
  }

  int ans1 = 0;
  int ans2 = 0;
  rep(i, n) {
    rep(j, n) {
      if (a[i] == b[j]) {
        if (i == j) {
          ans1++;
        } else {
          ans2++;
        }
      }
    }
  }
  cout << ans1 << endl << ans2 << endl;
}
