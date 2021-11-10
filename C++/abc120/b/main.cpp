#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int a, b, k; cin >> a >> b >> k;

  int count = 0;
  int ans = 101;
  while (count < k) {
    ans--;
    if (a % ans == 0 && b % ans == 0) {
      count++;
    }
  }

  // output
  cout << ans << endl;
}
