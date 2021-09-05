#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s; cin >> s;
  
  cout << ((s[2] == s[3] && s[4] == s[5]) ? "Yes" : "No") << endl;
}