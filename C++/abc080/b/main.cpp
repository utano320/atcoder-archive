#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int s = 0;
  int m = n;
  while (m > 0) {
    s += m % 10;
    m = m / 10;
  }

  // output
  cout << ((n % s == 0) ? "Yes" : "No") << endl;
}
