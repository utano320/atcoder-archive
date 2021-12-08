#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int h, n; cin >> h >> n;
  rep(i, n) {
    int a;
    cin >> a;
    h -= a;
    if (h <= 0) break;
  }

  // output
  cout << ((h <= 0) ? "Yes" : "No") << endl;
}
