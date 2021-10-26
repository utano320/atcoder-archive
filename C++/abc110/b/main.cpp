#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(int w, int x, int y, int z) {
  if (x >= z) return false;
  if (z > y) return false;
  if (w >= z) return false;

  return true;
}

int main() {
  // input
  int n, m, x, y; cin >> n >> m >> x >> y;
  int w = x, z = y;

  // input xi
  rep(i, n) {
    int xi;
    cin >> xi;
    if (w < xi) w = xi;
  }

  // input yi
  rep(i, m) {
    int yi;
    cin >> yi;
    if (z > yi) z = yi;
  }

  // solve
  bool ans = solve(w, x, y, z);

  // output
  cout << ((ans) ? "No War" : "War") << endl;
}
