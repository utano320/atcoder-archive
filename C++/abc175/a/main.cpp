#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s; cin >> s;
  int ans = 0;
  if (s == "RRR") {
    ans = 3;
  } else if (s.find("RR") != string::npos) {
    ans = 2;
  } else if (s.find("R") != string::npos) {
    ans = 1;
  }

  cout << ans << endl;
}