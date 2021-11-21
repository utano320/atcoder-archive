#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, d; cin >> n >> d;

  int ans = n / (2 * d + 1);
  if (n % (2 * d + 1) != 0) ++ans;
  // output
  cout << ans << endl;
}
