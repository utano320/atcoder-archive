#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  // solve
  string ans = (n / 100 == n % 10) ? "Yes" : "No";

  // output
  cout << ans << endl;
}
