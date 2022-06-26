#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int n, const vector<int>& a) {
  int ans;

  return ans;
}

int main() {
  // input
  int n, k, q; cin >> n >> k >> q;
  vector<int> a(k);
  rep(i, k) {
    cin >> a[i];
  }
  rep(j, q) {
    int l; cin >> l;
    // k番目のコマかどうか
    if (l == k) {
      // 一番右でなければ +1
      if (a[l - 1] < n) a[l - 1]++;
    } else {
      // 右があいてれば +1
      if (a[l - 1] + 1 < a[l]) a[l - 1]++;
    }
  }

  rep(i, k) {
    cout << a[i];
    if (i != k - 1) {
      cout << ' ';
    } else {
      cout << endl;
    }
  }
}
