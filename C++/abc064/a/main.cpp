#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int r, g, b; cin >> r >> g >> b;

  // output
  cout << (((r * 100 + g * 10 + b) % 4 == 0) ? "YES" : "NO") << endl;
}
