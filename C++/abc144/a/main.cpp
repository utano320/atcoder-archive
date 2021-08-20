#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;

  if (max(a, b) <= 9) {
    cout << a * b << endl;
  } else {
    cout << -1 << endl;
  }

}