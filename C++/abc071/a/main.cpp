#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int x, a, b; cin >> x >> a >> b;

  // solve
  string ans = (abs(x - a) < abs(x - b)) ? "A" : "B";

  // output
  cout << ans << endl;
}
