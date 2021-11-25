#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  int c = 1;
  int ans = 0;
  while (c < b) {
    c += a - 1;
    ++ans;
  }

  // output
  cout << ans << endl;
}
