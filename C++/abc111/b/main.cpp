#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n) {
  int d = n % 10;
  n = n / 10;

  while (n > 0) {
    int dn = n % 10;
    if (d != dn) return false;
    n = n / 10;
  }

  return true;
}

int main() {
  // input
  int n; cin >> n;

  // solve
  while (!solve(n)) {
    n++;
  }
  // output
  cout << n << endl;
}
