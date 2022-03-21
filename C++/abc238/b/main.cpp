#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int c = 0;
  vector<int> cut(n + 1);
  rep(i, n) {
    int a; cin >> a;
    c = (c + a) % 360;
    cut[i] = c;
  }
  cut[n] = 360;

  sort(cut.begin(), cut.end());

  int ans = 0;
  int p = 0;
  rep(i, n + 1) {
    int r = cut[i] - p;
    ans = max(ans, r);

    p = cut[i];
  }

  // output
  cout << ans << endl;
}
