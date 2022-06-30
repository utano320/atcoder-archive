#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m; cin >> n >> m;
  vector<int> s(n);
  rep(i, n) {
    s[i] = 0;
  }

  rep(i, m) {
    int a, b; cin >> a >> b;
    s[a - 1]++;
    s[b - 1]++;
  }

  rep(i, n) {
    cout << s[i] << endl;
  }
}
