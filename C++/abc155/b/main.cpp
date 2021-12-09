#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  string ans = "APPROVED";
  rep(i, n) {
    int a;
    cin >> a;
    if (a % 2 == 0 && !(a % 3 == 0 || a % 5 == 0)) {
      ans = "DENIED";
      break;
    }
  }

  // output
  cout << ans << endl;
}
