#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  double a, b, c, d; cin >> a >> b >> c >> d;
  double takahashi = b / a;
  double aoki = d / c;

  string ans = "DRAW";
  if (takahashi > aoki) {
    ans = "TAKAHASHI";
  } else if (takahashi < aoki) {
    ans = "AOKI";
  }

  // output
  cout << ans << endl;
}
