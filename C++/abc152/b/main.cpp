#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;
  int c, n;
  if (a <= b) {
    c = a;
    n = b;
  } else {
    c = b;
    n = a;
  }
  rep(i, n) {
    cout << c;
  }
  cout << endl;
}
