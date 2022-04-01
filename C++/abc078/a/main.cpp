#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  char x, y; cin >> x >> y;

  char ans = '=';
  if (x > y) {
    ans = '>';
  } else if (x < y) {
    ans = '<';
  }
  // output
  cout << ans << endl;
}
