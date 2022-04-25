#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 0;

  for (int i = 1; i <= n; i++) {
    int a = i * i;
    if (a <= n) {
      ans = a;
    } else {
      break;
    }
  }

  // output
  cout << ans << endl;
}
