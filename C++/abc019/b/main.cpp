#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;

  char c;
  int x;
  rep(i, s.size()) {
    char a = s[i];
    if (i == 0) {
      x = 0;
      c = a;
    } else if (c != a) {
      cout << c << x;
      x = 0;
      c = a;
    }
    x++;
  }
  cout << c << x << endl;
}
