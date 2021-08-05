#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector<int> a(3);
  rep(i, 3) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  // solve
  int ans = a[0] + a[1];

  // output
  cout << ans << endl;
}
