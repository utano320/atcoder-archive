#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  if (b % a == 0) {
    cout << a + b << endl;
  } else {
    cout << b - a << endl;
  }
}
