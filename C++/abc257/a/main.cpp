#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;
  int d = x / n - 1;
  int m = x % n;
  if (m > 0) d++;
  char ans = 'A' + d;
  // output
  cout << ans << endl;
}
