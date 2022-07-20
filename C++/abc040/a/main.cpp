#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n, x; cin >> n >> x;

  // output
  cout << min(x - 1, n - x) << endl;
}
