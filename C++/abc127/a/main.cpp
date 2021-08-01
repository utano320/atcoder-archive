#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  int ans;
  if (a >= 13) {
    ans = b;
  } else if (a >= 6) {
    ans = b / 2;
  } else {
    ans = 0;
  }
  
  // output
  cout << ans << endl;
}
