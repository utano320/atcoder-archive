#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(int n, int k, string s) {
  string ans = "";
  
  rep(i, n) {
    if (i == k - 1) {
      ans += tolower(s[i]);
    } else {
      ans += s[i];
    }
  }

  return ans;
}

int main() {
  // input
  int n, k; cin >> n >> k;
  string s;
  cin >> s;
  
  // solve
  auto ans = solve(n, k, s);

  // output
  cout << ans << endl;
}
