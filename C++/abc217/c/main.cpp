#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> p(n), q(n);
  rep(i, n) {
    cin >> p[i];
  }
  rep(i, n) {
    q[p[i] - 1] = i + 1;
  }

  rep(i, n) {
    cout << q[i];
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout << endl;
}
