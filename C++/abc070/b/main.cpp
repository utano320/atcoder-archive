#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c, d; cin >> a >> b >> c >> d;

  int s = max(a, c);
  int e = min(b, d);
  int ans = e - s;
  if (ans < 0) ans = 0;

  // output
  cout << ans << endl;
}
