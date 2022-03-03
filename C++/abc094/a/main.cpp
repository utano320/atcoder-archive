#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, x; cin >> a >> b >> x;

  // output
  cout << ((a <= x && x <= a + b) ? "YES" : "NO") << endl;
}
