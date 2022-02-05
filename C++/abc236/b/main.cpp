#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  map<int, int> a;
  rep(i, 4 * n - 1) {
    int ain; cin >> ain;
    if (a.count(ain) == 0) {
      a[ain] = 1;
    } else {
      a[ain]++;
    }
  }

  rep(i, n) {
    if (a[i + 1] == 3) {
      cout << i + 1 << endl;
      break;
    }
  }
}
