#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int64_t solve(int n, const vector<int64_t>& a) {
  int64_t ans;

  return ans;
}

int main() {
  // input
  int a , b; cin >> a >> b;
  if (a == 1) a = 14;
  if (b == 1) b = 14;

  string ans;
  if (a > b) {
    ans = "Alice";
  } else if (a < b) {
    ans = "Bob";
  } else {
    ans = "Draw";
  }

  // output
  cout << ans << endl;
}
