#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s1, s2; cin >> s1 >> s2;

  string ans = "Yes";
  if (s1 == ".#" && s2 == "#.") ans = "No";
  if (s2 == ".#" && s1 == "#.") ans = "No";
  // output
  cout << ans << endl;
}
