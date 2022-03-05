#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  bool a = false, b = false, c = false;
  rep(i, 3) {
    if (s[i] == 'a') a = true;
    if (s[i] == 'b') b = true;
    if (s[i] == 'c') c = true;
  }

  // output
  cout << (a && b && c ? "Yes" : "No") << endl;
}
