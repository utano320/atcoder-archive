#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int s; cin >> s;

  int a = s / 100; // 上2桁
  int b = s % 100; // 下2桁
  string ais, bis, ans;

  if (a >= 1 && a <= 12) {
    ais = "MM";
  } else {
    ais = "YY";
  }

  if (b >= 1 && b <= 12) {
    bis = "MM";
  } else {
    bis = "YY";
  }

  ans = ais + bis;
  if (ans == "YYYY") {
    ans = "NA";
  } else if (ans == "MMMM") {
    ans = "AMBIGUOUS";
  }

  // output
  cout << ans << endl;
}
