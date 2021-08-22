#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;
  int sum = a + b + c;

  if (sum >= 22) {
    cout << "bust" << endl;
  } else {
    cout << "win" << endl;
  }
}