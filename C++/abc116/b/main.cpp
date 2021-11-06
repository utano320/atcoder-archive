#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

set<int> l;

int64_t solve(int n) {
  return ((n % 2 == 0) ? n / 2 : 3 * n + 1);
}

int main() {
  // input
  int s; cin >> s;

  // solve
  for (int i = 0; i < 1000000; i++) {
    int a = ((i == 0) ? s : solve(s));
    if (l.count(a) == 0) {
      l.insert(a);
      s = a;
    } else {
      cout << i + 1 << endl;
      break;
    }
  }
}
