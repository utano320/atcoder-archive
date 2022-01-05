#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  while (n > 0 && n % 10 == 0) {
    n = n / 10;
  }
  string s = to_string(n);
  string r = s;
  reverse(r.begin(), r.end());
  // output
  cout << ((s == r) ? "Yes" : "No") << endl;
}
