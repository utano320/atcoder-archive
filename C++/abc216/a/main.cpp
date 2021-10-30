#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  float a; cin >> a;
  int x = (int)a;
  float y = (a - x) * 10;

  cout << x;
  if (y <= 2) {
    cout << "-" << endl;
  } else if (y <= 6) {
    cout << endl;
  } else {
    cout << "+" << endl;
  }
}