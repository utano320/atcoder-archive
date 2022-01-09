#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  reverse(s.begin(), s.end());

  rep(i, s.size()) {
    if (s[i] == '6') {
      cout << '9';
    } else if (s[i] == '9') {
      cout << '6';
    } else {
      cout << s[i];
    }
  }

  cout << endl;
}
