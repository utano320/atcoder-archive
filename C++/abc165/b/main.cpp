#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int64_t x; cin >> x;
  int64_t n = 100;
  int64_t y = 0;
  while (n < x) {
    n = n + n / 100;
    ++y;
  }

  // output
  cout << y << endl;
}
