#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0;
  int step = 0;
  rep(i, n) {
    if (s[i] == 'A') {
      step = 1;
      continue;
    } else if (step == 1 && s[i] == 'B') {
      step = 2;
      continue;
    } else if (step == 2 && s[i] == 'C') {
      step = 0;
      ++ans;
      continue;
    }
    step = 0;
  }

  // output
  cout << ans << endl;
}
