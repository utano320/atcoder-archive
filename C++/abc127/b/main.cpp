#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int r, d, x; cin >> r >> d >> x;

  rep(i, 10) {
    x = r * x - d;
    cout << x << endl;
  }
}
