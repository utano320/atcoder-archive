#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<double> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  double b = 0;
  rep(i, n) {
    b += 1.0 / a[i];
  }

  double ans = 1.0 / b;

  // output
  cout << fixed << setprecision(5) << ans << endl;
}
