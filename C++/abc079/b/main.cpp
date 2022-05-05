#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int i) {
  if (i == 0) return 2;
  if (i == 1) return 1;

  return solve(i - 1) + solve(i - 2);
}

int main() {
  // input
  int n; cin >> n;
  vector<long long> l(n + 1);
  rep(i, n + 1) {
    if (i == 0) {
      l[i] = 2;
    } else if (i == 1) {
      l[i] = 1;
    } else {
      l[i] = l[i - 1] + l[i - 2];
    }
  }
  // output
  cout << l[n] << endl;
}
