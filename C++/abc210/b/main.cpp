#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  string s; cin >> s;
  int ans = -1;
  rep(i, n) {
    char c = s[i];
    if (c == '1') {
      ans = i;
      break;
    }
  }

  // output
  cout << ((ans % 2 == 0) ? "Takahashi" : "Aoki") << endl;
}
