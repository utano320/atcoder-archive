#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  long long n; cin >> n;
  long long k = 0, ans = 1;

  while (true) {
    ans *= 2;
    if (ans > n) break;
    k++;
  }

  // output
  cout << k << endl;
}
