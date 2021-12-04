#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int64_t a, b, k; cin >> a >> b >> k;
  int64_t c = a, d = b;

  // a >= k
  if (a >= k) {
    c = a - k;
  } else if (a + b >= k) {
    c = 0;
    d = b - (k - a);
  } else {
    c = 0;
    d = 0;
  }

  // output
  cout << c << ' ' << d << endl;
}
