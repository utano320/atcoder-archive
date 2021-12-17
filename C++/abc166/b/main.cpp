#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, k; cin >> n >> k;
  set<int> a;
  rep(i, k) {
    int d; cin >> d;
    rep(j, d) {
      int ad; cin >> ad;
      a.insert(ad);
    }
  }

  // output
  cout << n - a.size() << endl;
}
