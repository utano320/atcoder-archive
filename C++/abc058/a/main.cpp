#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;

  string ans = (b - a == c - b) ? "YES" : "NO";
  // output
  cout << ans << endl;
}
