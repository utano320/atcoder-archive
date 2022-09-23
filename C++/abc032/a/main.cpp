#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, n; cin >> a >> b >> n;

  while (n % a != 0 || n % b != 0) {
    n++;
  }

  // output
  cout << n << endl;
}
