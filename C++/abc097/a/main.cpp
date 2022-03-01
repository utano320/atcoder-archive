#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, d; cin >> a >> b >> c >> d;

  // output
  cout << ((abs(a - c) <= d || abs(a - b) <= d && abs(b - c) <= d) ? "Yes" : "No") << endl;
}
