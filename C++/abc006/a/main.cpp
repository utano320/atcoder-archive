#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;

  string ans = "NO";
  if (n % 3 == 0) {
    ans = "YES";
  } else {
    string s = to_string(n);
    if (s.find("3") != string::npos) {
      ans = "YES";
    }
  }

  // output
  cout << ans << endl;
}
