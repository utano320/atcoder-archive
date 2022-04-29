#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b; cin >> a >> b;
  int p = b - a;
  int l = 0;
  rep(i, p) {
    l += i + 1;
  }
  int x = l - b;

  cout << x << endl;
}
