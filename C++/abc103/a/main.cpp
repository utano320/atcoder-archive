#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(const vector<int> &a) {

  int ans = 0;
  
  rep(i, a.size() - 1) {
    ans += a[i + 1] - a[i];
  }

  return ans;
}

int main() {
  // input
  vector<int> a(3);
  rep(i, 3) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  // solve
  int ans = solve(a);

  // output
  cout << ans << endl;
}
