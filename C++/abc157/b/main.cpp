#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(const vector<int>& a, const set<int>& b) {
  // 横
  for (int i = 0; i < 3; i++) {
    if (b.count(a[i * 3]) == 0) continue;
    if (b.count(a[i * 3 + 1]) == 0) continue;
    if (b.count(a[i * 3 + 2]) == 0) continue;
    return true;
  }
  // 縦
  for (int j = 0; j < 3; j++) {
    if (b.count(a[j]) == 0) continue;
    if (b.count(a[3 + j]) == 0) continue;
    if (b.count(a[6 + j]) == 0) continue;
    return true;
  }
  // ななめ
  if (b.count(a[4]) == 1) {
    if (b.count(a[0]) == 1 && b.count(a[8]) == 1) return true;
    if (b.count(a[2]) == 1 && b.count(a[6]) == 1) return true;
  }

  return false;
}

int main() {
  // input
  vector<int> a(9);
  rep(i, 9) {
    cin >> a[i];
  }
  int n; cin >> n;
  set<int> b;
  rep(i, 9) {
    int bb;
    cin >> bb;
    b.insert(bb);
  }

  // solve
  bool ans = solve(a, b);

  // output
  cout << ((ans) ? "Yes" : "No") << endl;
}
