#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int x; cin >> x;
  int a, b;
  a = x / 500;
  b = (x - 500 * a) / 5;

  // output
  cout << a * 1000 + b * 5 << endl;
}
