#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  int len = s.size() - 2;

  // output
  cout << s[0] << len << s[s.size() - 1] << endl;
}
