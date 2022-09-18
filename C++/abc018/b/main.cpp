#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, c; cin >> a >> b >> c;

  int ai = 1, bi = 1, ci = 1;
  if (a < b) {
    ai++;
  } else {
    bi++;
  }
  if (a < c) {
    ai++;
  } else {
    ci++;
  }
  if (b < c) {
    bi++;
  } else {
    ci++;
  }

  cout << ai << endl;
  cout << bi << endl;
  cout << ci << endl;
}
