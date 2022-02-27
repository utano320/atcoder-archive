#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m; cin >> n >> m;
  vector<int64_t> a(n);
  vector<int64_t> b(m);
  rep(i, n) {
    cin >> a[i];
  }
  rep(i, m) {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int p = -1;
  rep(i, m) {
    p++;
    while (p < n && a[p] != b[i]) {
      p++;
    }
    if (p == n) break;
  }

  // output
  cout << (p == n ? "No" : "Yes") << endl;
}
