#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  int l = s.size();
  vector<char> sc(l);
  rep(i, l) {
    sc[i] = s[i];
  }

  sort(sc.begin(), sc.end());

  // output
  rep(i, l) {
    cout << sc[i];
  }
  cout << endl;
}
