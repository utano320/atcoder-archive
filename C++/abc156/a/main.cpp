#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, r ; cin >> n >> r;

  int ans;
  if (n >= 10) {
    ans = r;
  } else {
    ans = r + 100 * (10 - n);
  }
  
  cout << ans << endl;
}