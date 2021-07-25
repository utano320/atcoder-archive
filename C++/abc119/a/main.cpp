#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  string ans;

  if (s <= "2019/04/30") {
    ans = "Heisei";
  } else {
    ans = "TBD";
  }

  // output
  cout << ans << endl;
}
