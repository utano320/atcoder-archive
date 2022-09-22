#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  int n; cin >> n;
  vector<string> a(25);
  rep(i, 5) {
    rep(j, 5) {
      a[i*5+j] = s.substr(i, 1) + s.substr(j, 1);
    }
  }

  sort(a.begin(), a.end());

  // output
  cout << a[n - 1] << endl;
}
