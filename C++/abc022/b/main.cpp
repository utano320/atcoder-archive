#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  set<int> s;

  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (s.count(a) > 0) {
      ans++;
    } else {
      s.insert(a);
    }
  }

  // output
  cout << ans << endl;
}
