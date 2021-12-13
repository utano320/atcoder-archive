#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int a) {
  if (a % 3 == 0 || a % 5 == 0) return 0;
  return a;
}

int main() {
  // input
  int n; cin >> n;
  int64_t sum = 0;
  rep(i, n) {
    sum += solve(i + 1);
  }

  // output
  cout << sum << endl;
}
