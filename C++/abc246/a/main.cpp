#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {
  // input
  vector< vector<int> > a(3, vector<int>(2));
  rep(i, 3) {
    cin >> a[i][0] >> a[i][1];
  }

  int x = a[0][0];
  int y = a[0][1];

  if (x == a[1][0]) {
    x = a[2][0];
  } else if (x == a[2][0]) {
    x = a[1][0];
  }

  if (y == a[1][1]) {
    y = a[2][1];
  } else if (y == a[2][1]) {
    y = a[1][1];
  }

  // output
  cout << x << ' ' << y << endl;
}
