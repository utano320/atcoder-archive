#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;

  int ans = c;
  while (ans <= b) {
    if (a <= ans && ans <= b) break;
    ans += c;
  }

  // output
  cout << ((ans > b) ? -1 : ans) << endl;
}
