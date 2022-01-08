#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(n);
  map<int, string> mp;
  rep(i, n) {
    string s; cin >> s;
    int t; cin >> t;
    a[i] = t;
    mp[t] = s;
  }

  sort(a.begin(), a.end());

  // output
  cout << mp[a[n - 2]] << endl;
}
