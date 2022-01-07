#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  long long n, k; cin >> n >> k;
  rep(i, k) {
    if (n % 200 == 0) {
      n = n / 200;
    } else {
      n = n * 1000 + 200;
    }
  }

  // output
  cout << n << endl;
}
