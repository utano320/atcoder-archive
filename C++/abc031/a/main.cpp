#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, d; cin >> a >> d;

  // output
  cout << max((a + 1) * d, a * (d + 1)) << endl;
}
