#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n; cin >> n;
  int ans;

  if (n <= 125) {
    ans = 4;
  } else if (n <= 211) {
    ans = 6;
  } else {
    ans = 8;
  }
  cout << ans << endl;
}