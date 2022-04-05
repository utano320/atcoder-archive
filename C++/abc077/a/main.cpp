#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string a, b;
  cin >> a;
  cin >> b;

  string ans = "YES";
  if (a[0] != b[2] || a[1] != b[1] || a[2] != b[0]) ans = "NO";
  // output
  cout << ans << endl;
}
