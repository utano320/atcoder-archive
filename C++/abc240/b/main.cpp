#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  set<int> a;
  rep(i, n) {
    int t; cin >> t;
    a.insert(t);
  }

  // output
  cout << a.size() << endl;
}
