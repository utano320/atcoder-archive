#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, d, x; cin >> n >> d >> x;
  rep(i, n) {
    int a;
    cin >> a;
    x += 1 + (d - 1) / a;
  }

  // output
  cout << x << endl;
}
