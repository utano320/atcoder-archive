#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string solve(int n) {
  if (n % 4 == 0) return "Yes";
  if (n % 7 == 0) return "Yes";
  int aMax = n / 4;

  rep(i, aMax) {
    if ((n - i * 4) % 7 == 0) return "Yes";
  }

  return "No";
}

int main() {
  int n; cin >> n;
  cout << solve(n) << endl;
}
