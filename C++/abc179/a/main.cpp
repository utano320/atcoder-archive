#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s; cin >> s;
  string a = ((s[s.size()-1] == 's') ? "es" : "s");

  cout << s + a << endl;
}