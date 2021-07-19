#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;
  // output
  string ans;
  if (a * b % 2 != 0) {
    ans = "Yes";
  } else {
    ans = "No";
  }
  cout << ans << endl;
}
