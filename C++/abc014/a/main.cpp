#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  int m = a % b;
  int ans = (m != 0) ? b - m : 0;
  // output
  cout << ans << endl;
}
