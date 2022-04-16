#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  long long a, b, k; cin >> a >> b >> k;

  int ans = 0;
  while (a < b) {
    ans++;
    a *= k;
  }

  // output
  cout << ans << endl;
}
