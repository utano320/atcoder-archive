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

  int sum = 0;
  for (int i = n; i >= 1; i--) {
    sum += a[i - 1];
    if (sum >= 4) {
      cout << i << endl;
      break;
    }
  }

  if (sum < 4) cout << 0 << endl;
}
