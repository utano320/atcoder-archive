#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> p(n - 1);
  rep(i, n - 1) {
    cin >> p[i];
  }

  int i = p[n - 2];
  int ans = 1;
  while (i != 1) {
    i = p[i - 2];
    ans++;
  }

  // output
  cout << ans << endl;
}
