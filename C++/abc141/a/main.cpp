#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;

  string ans = "";
  if (s == "Sunny") {
    ans = "Cloudy";
  } else if (s == "Cloudy") {
    ans = "Rainy";
  } else {
    ans = "Sunny";
  }

  // output
  cout << ans << endl;
}