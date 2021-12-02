#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;

  int ans = 0;
  int l = s.size();
  int a = l / 2;
  rep(i, a) {
    if (s[i] != s[l - 1 - i]) ++ans;
  }
  // output
  cout << ans << endl;
}
