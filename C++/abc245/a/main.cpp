#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, d; cin >> a >> b >> c >> d;

  // solve
  string ans = "Takahashi";
  if (a > c || a == c && b > d) {
    ans = "Aoki";
  }

  // output
  cout << ans << endl;
}
