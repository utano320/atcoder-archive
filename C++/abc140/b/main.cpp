#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n-1);

  rep(i, n) { cin >> a[i]; }
  rep(i, n) { cin >> b[i]; }
  rep(i, n - 1) { cin >> c[i]; }

  // solve
  int before = -1;
  int sum = 0;
  rep(i, n) {
    int ai = a[i];
    sum += b[ai - 1];
    if (ai - before == 1) {
      sum += c[before - 1];
    }

    before = ai;
  }

  // output
  cout << sum << endl;
}
