#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int n; cin >> n;
  string ans;
  if (n <= 59) {
    ans = "Bad";
  } else if (n <= 89) {
    ans = "Good";
  } else if (n <= 99) {
    ans = "Great";
  } else {
    ans = "Perfect";
  }

  // output
  cout << ans << endl;
}
