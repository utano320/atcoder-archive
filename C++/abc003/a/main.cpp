#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  double sum = 0;

  rep(i, n) {
    sum += (i + 1);
  }

  double ans = sum * 10000 / n;

  // output
  cout << ans << endl;
}
