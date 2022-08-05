#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;

  rep(i, s.size()) {
    char c = s[i];
    if (i == 0) {
      if (c >= 'a' && c <= 'z') {
        cout << char(c - ('a' - 'A'));
      } else {
        cout << c;
      }
    } else {
      if (c >= 'A' && c <= 'Z') {
        cout << char(c + ('a' - 'A'));
      } else {
        cout << c;
      }
    }
  }
  cout << endl;
}
