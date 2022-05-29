#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;

  // solve
  string ans = (a <= b && b <= c || c <= b && b <= a) ? "Yes" : "No";

  // output
  cout << ans << endl;
}
