#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, d, e, f, x; cin >> a >> b >> c >> d >> e >> f >> x;

  int takahashi = (x / (a + c) * a + min(x % (a + c), a)) * b;
  int aoki = (x / (d + f) * d + min(x % (d + f), d)) * e;

  
  string ans = "Draw";
  if (takahashi > aoki) {
    ans = "Takahashi";
  } else if (takahashi < aoki) {
    ans = "Aoki";
  }
  // output
  cout << ans << endl;
}
