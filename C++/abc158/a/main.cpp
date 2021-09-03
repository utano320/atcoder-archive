#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s; cin >> s;
  set<char> ss;

  rep(i, 3) {
    ss.insert(s[i]);
  }

  cout << ((ss.size() == 2) ? "Yes" : "No") << endl;
}