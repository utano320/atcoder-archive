#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int n; cin >> n;
  vector< vector<int> > a(n, vector<int>(2));
  rep(i, n) {
    cin >> a[i][0] >> a[i][1];
  }

  double m = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      double l = pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2);
      if (m < l) m = l;
    }
  }

  // output
  cout << fixed << setprecision(10) << sqrt(m) << endl;
}
