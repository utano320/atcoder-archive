#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int y; cin >> y;

  while (y % 4 != 2) {
    y++;
  }
  // output
  cout << y << endl;
}
