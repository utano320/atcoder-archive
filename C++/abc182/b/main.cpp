#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int n, int k, const vector<int>& a) {
  int count = 0;
  rep(i, n) {
    if (a[i] % k == 0) count++;
  }

  return count;
}

int main() {
  // input
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  int maxCount = 0;
  int maxK = 0;
  // solve
  for (int k = 2; k <= 1000; k++) {
    int count = solve(n, k, a);
    if (maxCount <= count) {
      maxCount = count;
      maxK = k;
    }
  }

  // output
  cout << maxK << endl;
}
