#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool solve(long long a, long long b, long long c) {
  vector<long long> m(3);
  m[0] = a;
  m[1] = b;
  m[2] = c;
  sort(m.begin(), m.end());
  if (m[2] >= m[0] + m[1]) return false;
  if (m[0] == m[1] || m[1] == m[2]) return false;
  return true;
}

int main() {
  // input
  int n; cin >> n;
  vector<long long> l(n);
  rep(i, n) {
    cin >> l[i];
  }

  int ans = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (solve(l[i], l[j], l[k])) ++ans;
      }
    }
  }

  // output
  cout << ans << endl;
}
