#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b; cin >> a >> b;
  string ans = "Alloy";
  if (a == 0) ans = "Silver";
  if (b == 0) ans = "Gold";
  cout << ans << endl;
}