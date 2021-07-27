#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;

  int d = b / a;
  if (d > c) {
    d = c;
  }

  // output
  cout << d << endl;
}
