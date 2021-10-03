#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int ans = 100;
  rep(i, 4) {
    int a; cin >> a;
    if (ans > a) {
      ans = a;
    }
  }
  
  cout << ans << endl;
}