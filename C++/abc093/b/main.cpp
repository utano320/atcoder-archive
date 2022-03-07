#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, k; cin >> a >> b >> k;

  for (int i = a; i <= b; i++) {
    if (i - a < k || b - i < k) cout << i << endl;
  }
}
