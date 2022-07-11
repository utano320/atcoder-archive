#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string o, e; cin >> o >> e;

  rep(i, o.size()) {
    cout << o[i];
    if (i < e.size()) cout << e[i];
  }

  cout << endl;
}
