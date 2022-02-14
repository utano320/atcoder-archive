#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t f(int x) {
  return x * x + 2 * x + 3;
}

int main() {
  // input
  int t; cin >> t;
  // output
  cout << f(f(f(t) + t) + f(f(t))) << endl;
}
