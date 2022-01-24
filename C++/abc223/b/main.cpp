#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  vector<string> sa(s.size());
  rep(i, s.size()) {
    string t = ((i == 0) ? s : s.substr(i) + s.substr(0, i));
    sa[i] = t;
  }

  sort(sa.begin(), sa.end());
  cout << sa[0] << endl;
  cout << sa[s.size() - 1] << endl;
}
