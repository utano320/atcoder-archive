#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string S;
  int ans = 0;

  cin >> S;

  rep(i, S.size()) {
    if (S.at(i) == '+') {
      ans++;
    } else {
      ans--;
    }
  }

  cout << ans << endl;
}
