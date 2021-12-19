#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  int k; cin >> k;
  string s; cin >> s;

  // output
  cout << ((k >= s.size()) ? s : s.substr(0, k) + "...") << endl;
}
