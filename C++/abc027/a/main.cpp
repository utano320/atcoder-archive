#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector<int> a(3);
  rep(i, 3) {
    cin >> a[i];
  }
  int ans;
  if (a[0] == a[1]) ans = a[2];
  if (a[1] == a[2]) ans = a[0];
  if (a[2] == a[0]) ans = a[1];

  // output
  cout << ans << endl;
}
