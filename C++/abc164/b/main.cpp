#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int hp, int of) {
  return (hp + of - 1) / of;
}

int main() {
  // input
  int a, b, c, d; cin >> a >> b >> c >> d;
  int taka = solve(c, b);
  int aoki = solve(a, d);

  // output
  cout << ((taka <= aoki) ? "Yes" : "No") << endl;
}
