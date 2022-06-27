#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int ans = 64;
  
  while (ans >= 1) {
    if (ans <= n) {
      cout << ans << endl;
      break;
    }
    ans /= 2;
  }
}
