#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  double ans = 0;
  rep(i, n) {
    double x;
    string c;
    cin >> x;
    cin >> c;
    if (c == "JPY") {
      ans += x;
    } else {
      ans += x * 380000;
    }
  }

  // output
  cout << fixed << setprecision(4) << ans << endl;
}
