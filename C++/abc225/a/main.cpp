#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // input
  string s; cin >> s;
  string a = s.substr(0, 1);
  string b = s.substr(1, 1);
  string c = s.substr(2, 1);
  set<string> ans;
  ans.insert(a + b + c);
  ans.insert(a + c + b);
  ans.insert(b + a + c);
  ans.insert(b + c + a);
  ans.insert(c + a + b);
  ans.insert(c + b + a);

  // output
  cout << ans.size() << endl;
}
