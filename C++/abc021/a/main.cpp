#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  vector<int> a(10);

  int i = 0;

  while (n > 0) {
    if (n >= 8) {
      a[i] = 8; n -= 8;
    } else if (n >= 4) {
      a[i] = 4; n -= 4;
    } else if (n >= 2) {
      a[i] = 2; n -= 2;
    } else {
      a[i] = 1; n -= 1;
    }
    i++;
  }
  cout << i << endl;
  rep(j, 10) {
    if (a[j] > 0) {
      cout << a[j] << endl;
    } else {
      break;
    }
  }
}
