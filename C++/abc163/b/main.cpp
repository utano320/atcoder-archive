#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, m; cin >> n >> m;
  rep(i, m) {
    int a;
    cin >> a;
    n -= a;
  }

  // output
  cout << ((n >= 0) ? n : -1) << endl;
}
