#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string a, b; cin >> a >> b;
  int c = stoi(a + b);
  string ans = "No";
  rep(i, c / 2) {
    if (i * i == c) ans = "Yes";
  }

  // output
  cout << ans << endl;
}
