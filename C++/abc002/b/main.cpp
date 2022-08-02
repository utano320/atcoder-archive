#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string w; cin >> w;
  rep(i, w.size()) {
    char c = w[i];
    if (c == 'a') continue;
    if (c == 'i') continue;
    if (c == 'u') continue;
    if (c == 'e') continue;
    if (c == 'o') continue;
    cout << c;
  }

  // output
  cout << endl;
}
