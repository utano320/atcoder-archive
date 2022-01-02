#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;
  string s; cin >> s;
  rep(i, n) {
    if (s[i] == 'o') {
      x++;
    } else {
      x = max(0, x - 1);
    }
  }

  // output
  cout << x << endl;
}
