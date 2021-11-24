#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int k, x; cin >> k >> x;
  int start = max(-1000000, x - k + 1);
  int end = min(1000000, x + k - 1);

  for (int i = start; i <= end; i++) {
    if (i > start) cout << ' ';
    cout << i;
  }
  cout << endl;
}
