#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  vector<int> a(10);
  rep(i, 10) {
    cin >> a[i];
  }

  int ans = 0;
  rep(i, 3) {
    ans = a[ans];
  }
  // output
  cout << ans << endl;
}
