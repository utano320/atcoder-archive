#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string n; cin >> n;

  string ans = (n[0] == n[1] && n[1] == n[2] && n[2] == n[3]) ? "SAME" : "DIFFERENT";
  // output
  cout << ans << endl;
}
