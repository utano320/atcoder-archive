#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  int b = 1000;
  int c = 0;
  rep(i, n) {
    int a; cin >> a;
    b = min(b, a);
    c = max(c, a);
  }

  // output
  cout << c - b << endl;
}
