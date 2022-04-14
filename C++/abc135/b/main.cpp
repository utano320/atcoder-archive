#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> p(n), s(n);
  rep(i, n) {
    cin >> p[i];
    s[i] = p[i];
  }

  sort(s.begin(), s.end());

  int diff = 0;
  rep(i, n) {
    if (s[i] != p[i]) diff++;
  }

  // output
  cout << (diff == 2 || diff == 0 ? "YES" : "NO") << endl;
}
