#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  string s, t; cin >> s >> t;
  rep(i, n) {
    cout << s[i] << t[i];
  }

  cout << endl;
}
