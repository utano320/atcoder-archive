#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s; cin >> s;
    if (mp.count(s) == 0) {
      mp[s] = 1;
    } else {
      mp[s]++;
    }
  }

  // solve
  int max = 0;
  string ans = "";
  for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    if (max < itr->second) {
      max = itr->second;
      ans = itr->first;
    }
  }

  // output
  cout << ans << endl;
}
