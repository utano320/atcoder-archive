#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m ; cin >> n >> m;
  
  int ans = 0;
  if (n >= 2) {
    ans += (n * (n - 1)) / 2;
  }
  if (m >= 2) {
    ans += (m * (m - 1)) / 2;
  }
  cout << ans << endl;
}