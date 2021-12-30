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
  int count = 0;
  int ans = false;
  rep(i, n) {
    int d1, d2; cin >> d1 >> d2;
    if (d1 == d2) {
      ++count;
      if (count == 3) {
        ans = true;
        break;
      }
    } else {
      count = 0;
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
}
