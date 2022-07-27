#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  int ans = (n % 2 == 0) ? n - 1 : n + 1;

  // output
  cout << ans << endl;
}
