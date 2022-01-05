#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;
  int sum = 0;
  rep(i, n) {
    int a; cin >> a;
    sum += (i % 2 == 1) ? a - 1 : a;
  }

  // output
  cout << ((sum <= x) ? "Yes" : "No") << endl;
}
