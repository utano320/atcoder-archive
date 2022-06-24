#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(1);
  rep(i, n) {
    vector<int> b(i + 1);
    rep(j, i + 1) {
      if (j == 0 || j == i) {
        b[j] = 1;
        cout << 1;
      } else {
        b[j] = a[j - 1] + a[j];
        cout << b[j];
      }
      if (j == i) {
        a = b;
        cout << endl;
      } else {
        cout << ' ';
      }
    }
  }
}
