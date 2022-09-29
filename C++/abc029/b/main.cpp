#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int ans = 0;

  rep(i, 12) {
    string s;
    cin >> s;
    if (s.find('r') != string::npos) ans++;
  }

  // output
  cout << ans << endl;
}
