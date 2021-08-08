#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  map<char, int> m;

  rep(i, 4) {
    if (m.find(s[i]) != m.end()) {
      m[s[i]]++;
    } else {
      m[s[i]] = 1;
    }
  }

  if (m.size() != 2) {
    cout << "No" << endl;
  } else {
    for (auto itr = m.begin(); itr != m.end(); ++itr) {
      if (itr->second != 2) {
        cout << "No" << endl;
        return 0;
      }
    }
    cout << "Yes" << endl;
  }
}
