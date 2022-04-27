#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  set<int> d;
  rep(i, n) {
    int a; cin >> a;
    d.insert(a);
  }

  // output
  cout << d.size() << endl;
}
