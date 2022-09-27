#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  map<string, int> m;
  rep(i, n) {
    string s;
    cin >> s;
    m[s]++;
  }

  auto iter = m.begin();
  string ans = iter->first;
  int max = iter->second;
  ++iter;
  while (iter != m.end()) {
    if (max < iter->second) {
      ans = iter->first;
      max = iter->second;
    }
    ++iter;
  }

  // output
  cout << ans << endl;
}
