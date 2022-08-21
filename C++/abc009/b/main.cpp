#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int ans = a[a.size() - 1];
  for (int i = a.size() - 2; i >= 0; i--) {
    if (ans != a[i]) {
      ans = a[i];
      break;
    }
  }

  // output
  cout << ans << endl;
}
