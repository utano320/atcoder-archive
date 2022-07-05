#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  int ans = b / a;
  if (b % a != 0) ans++;
  // output
  cout << ans << endl;
}
